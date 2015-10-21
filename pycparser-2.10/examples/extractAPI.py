from __future__ import print_function
import sys

sys.path.extend(['.', '..'])

from pycparser import c_parser, c_ast, parse_file

globalVars = {}
localVars = {}

def _explain_decl_node(decl_node):
    """ Receives a c_ast.Decl note and returns its explanation in
        English.
    """
    #~ print decl_node.show()
    storage = ' '.join(decl_node.storage) + ' ' if decl_node.storage else ''
        
    return (decl_node.name + 
            " is a " + 
            storage + 
            _explain_type(decl_node.type))


def _explain_type(decl):
    """ Recursively explains a type decl node
    """
    typ = type(decl)
    
    if typ == c_ast.TypeDecl:
        quals = ' '.join(decl.quals) + ' ' if decl.quals else ''
        return quals + str(_explain_type(decl.type))

    elif typ == c_ast.Typename:
        return _explain_type(decl.type)
   
    elif typ == c_ast.Decl:
        return _explain_type(decl.type)
    		

    elif typ == c_ast.IdentifierType:
        return ' '.join(decl.names)

    elif typ == c_ast.PtrDecl:
        quals = ' '.join(decl.quals) + ' ' if decl.quals else ''
        return quals + 'pointer to ' + str(_explain_type(decl.type))

    elif typ == c_ast.ArrayDecl:
        arr = 'pointer to '
        return arr + str(_explain_type(decl.type))
    		
    elif typ == c_ast.FuncDecl:
    	if decl.args:
            params = [_explain_type(param) for param in decl.args.params]
            args = ', '.join(params)
        else:
            args = ''
        return ('function(%s) returning ' % (args) + str(_explain_type(decl.type)))

    elif typ == c_ast.FuncDef:
    	return decl.decl.name
	
    elif typ == c_ast.Struct:
    	return 'struct ' + decl.name

def structRefPrint(Node):
	s = ""
	if type(Node.name) == c_ast.StructRef:
		s = s + structRefPrint (Node.name)
	else:
		s = s + str(Node.name.name) + "->"
	s = s + Node.field.name + "->"	
	return s

def find_type(Node):
	return_list = []
	for i in Node.exprs:
		if type(i) == c_ast.ID:
			return_list.append(i.name)
		if type(i) == c_ast.StructRef:
			s = ""
			if type(i.name) == c_ast.StructRef:			
				s = s + structRefPrint(i.name)
			else:
				s = s+str(i.name) + "->"
			s = s+str(i.field.name)
				
			return_list.append(s)
	return return_list

def recurse_type(Node):
	typ = type(Node)
	#print('%s' % typ)
	return_list = []
	if typ == c_ast.TypeDecl:
		return_list.append(_explain_type(Node))

	

	elif typ == c_ast.Assignment:
		return_list+=recurse_type(Node.lvalue)
		return_list+=recurse_type(Node.rvalue)
		

	elif typ == c_ast.BinaryOp:
		return_list+=recurse_type(Node.left)
		return_list+=recurse_type(Node.right)
	
	elif typ == c_ast.Case:
		return_list+=recurse_type(Node.expr)
		for i in Node.stmts:
			return_list+=recurse_type(i)

	elif typ == c_ast.Cast:
		return_list+=recurse_type(Node.to_type)
		return_list+=recurse_type(Node.expr)

	elif typ == c_ast.Compound:
		for i in Node.block_items:
			return_list+=recurse_type(i)

	elif typ == c_ast.CompoundLiteral:
		return_list+=recurse_type(Node.type)
		return_list+=recurse_type(Node.init)

	elif typ == c_ast.Decl:
		return_list+=recurse_type(Node.type)
		return_list+=recurse_type(Node.init)
		return_list+=recurse_type(Node.bitsize)
		localVars[Node.name] = str(_explain_type(Node))

	elif typ == c_ast.DeclList:
		for i in Node.decls:
			return_list+=recurse_type(i)

	elif typ == c_ast.Default:
		for i in Node.stmts:
			return_list+=recurse_type(i)

	elif typ == c_ast.DoWhile:
		return_list+=recurse_type(Node.cond)
		return_list+=recurse_type(Node.stmt)
		
	elif typ == c_ast.Enum:
		return_list+=recurse_type(Node.values)

	elif typ == c_ast.Enumerator:
		return_list+=recurse_type(Node.value)

	elif typ == c_ast.EnumeratorList:
		for i in Node.enumerators:
			return_list+=recurse_type(i)

	elif typ == c_ast.ExprList:
		for i in Node.exprs:
			return_list+=recurse_type(i)
	
	elif typ == c_ast.FileAST:
		for i in Node.ext:
			return_list+=recurse_type(i)
		
	
	elif typ == c_ast.For:
		return_list+=recurse_type(Node.init)
		return_list+=recurse_type(Node.cond)
		return_list+=recurse_type(Node.next)
		return_list+=recurse_type(Node.stmt)
		


	elif typ == c_ast.FuncCall:
		f = Node.name.name + "("
		for i in find_type(Node.args):
			if i in localVars:			
				f = f+localVars[i]+","
			else:
				f = f+globalVars[i]+","
		f = f[:-1]
		f = f + ")"
		return_list.append(f)
		return_list+=recurse_type(Node.args)
	
	elif typ == c_ast.FuncDecl:
		return_list+=recurse_type(Node.args)
		return_list+=recurse_type(Node.type)
	
	elif typ == c_ast.FuncDef:
		return_list+=recurse_type(Node.decl)
		return_list+=recurse_type(Node.body)

		if Node.param_decls != None:
			for i in Node.param_decls:
				return_list+=recurse_type(i)

	elif typ == c_ast.If:
		return_list+=recurse_type(Node.cond)
		return_list+=recurse_type(Node.iftrue)
		return_list+=recurse_type(Node.iffalse)
	
	elif typ == c_ast.InitList:
		for i in Node.exprs:
			return_list+=recurse_type(i)

	elif typ == c_ast.IdentifierType:
		return_list.append(_explain_type(Node))

	elif typ == c_ast.Label:
		return_list+=recurse_type(Node.stmt)
		
	elif typ == c_ast.NamedInitializer:
		return_list+=recurse_type(Node.expr)
		for i in Node.name:
			return_list+=recurse_type(i)
		

	elif typ == c_ast.ParamList:
		for i in Node.params:
			return_list+=recurse_type(i)


	elif typ == c_ast.PtrDecl:
		x = recurse_type(Node.type)		
		for var in x:
			return_list.append("pointer to " + str(var))
		
	elif typ == c_ast.Return:
		return_list+=recurse_type(Node.expr)
		

	elif typ == c_ast.Struct:
		for i in Node.decls:
			return_list+=recurse_type(i)
		
	
	elif typ == c_ast.StructRef:
		return_list+=recurse_type(Node.name)
		return_list+=recurse_type(Node.field)
		
	elif typ == c_ast.Switch:
		return_list+=recurse_type(Node.cond)
		return_list+=recurse_type(Node.stmt)


	elif typ == c_ast.TernaryOp:
		return_list+=recurse_type(Node.cond)
		return_list+=recurse_type(Node.iftrue)
		return_list+=recurse_type(Node.iffalse)

	
	elif typ == c_ast.TypeDecl:
		return_list+=recurse_type(Node.type)
		
	elif typ == c_ast.Typedef:
		return_list+=recurse_type(Node.type)
		
	elif typ == c_ast.Typename:
		return_list+=recurse_type(Node.type)

	elif typ == c_ast.UnaryOp:
		return_list+=recurse_type(Node.expr)


	elif typ == c_ast.Union:
		for i in Node.decls:
			return_list+=recurse_type(i)
	
	elif typ == c_ast.While:
		return_list+=recurse_type(Node.cond)
		return_list+=recurse_type(Node.stmt)

	return return_list


if __name__ == '__main__':
	s = raw_input()
	ast = parse_file(s,use_cpp = True)
	#ast.show()
	apilist = {}

	for i in ast.ext:
		if type(i) == c_ast.FuncDef:
			localVars = {}
			print('$%s' % _explain_type(i))
			func_name = _explain_type(i)
			apilist[func_name] = []
			for j in recurse_type(i):
				print('%s' % j)
				apilist[func_name].append(j)
		elif type(i) == c_ast.Decl or type(i) == c_ast.PtrDecl:
			globalVars[i.name] = str(_explain_type(i))
