s = "outputSample1"
f = open(s,'r')
apiList = []
funcApiList = {}
curFunc = ""

for line in f:
	if line[0] == '$':
		funcApiList[line[1:]] = []
		curFunc = line[1:]
	else :
		funcApiList[curFunc].append(line)
		if line not in apiList:
			apiList.append(line)

vectorMatrix = []

for func in funcApiList:
	newVector = []
	for api in apiList:
		if api in funcApiList[func]:
			newVector.append(1)
		else:
			newVector.append(0)
	vectorMatrix.append(newVector)

for vector in vectorMatrix:
	print vector
