from sklearn.metrics.pairwise import pairwise_distances
import matplotlib.pyplot as plt
import matplotlib.cm as cm
import numpy
from sklearn.decomposition import PCA
import random

def readData(filename):
	f = open(filename,'r')
	data = []
	lbl = []
	label = 0
	for line in f:
		if line.startswith('#'):
			label = int(line.strip()[1:])
		else:
			line = line.strip().split(',')
			for i in range(len(line)):
				line[i] = int(line[i])
			data.append(line)
			lbl.append(label)
	return data,lbl

def greyplot(data):
	height, width = len(data), len(data[0])
	desired_width = 8
	spines = 'left', 'right', 'top', 'bottom'

	labels = ['label' + spine for spine in spines]

	tick_params = {spine : False for spine in spines}
	tick_params.update({label : False for label in labels})
	scale = desired_width / float(width)
	fig, ax = plt.subplots(1, 1, figsize=(desired_width, height*scale))
	img = ax.imshow(data, cmap=cm.Greys_r, interpolation='none')
	for spine in spines:
    		ax.spines[spine].set_visible(False)

	#hide ticks and labels
	ax.tick_params(**tick_params)
	#preview
	plt.show()
	#save
	fig.savefig('test.png', dpi=300)

def cosim(data):
	X = pairwise_distances(data,metric='cosine')
	m1 = 0
	m2 = 1		
	for i in X:
		m1=max(m1,max(i))
		m2 = min(m2,min(i))
	print len(X),len(X[0])
	for i in range(len(X)):
		for j in range(len(X[i])):
			X[i][j] = (X[i][j]*255.0)/m1

	greyplot(X)

	v1 = 0
	v2 = 0
	v3 = 0
	v4 = 0
	for i in range(25):
		for j in range(25):
			v1 += X[i][j]
	for i in range(25):
		for j in range(25,36):
			v2 += X[i][j]
	for i in range(25,36):
		for j in range(25):
			v3 += X[i][j]
	for i in range(25,36):
		for j in range(25,36):
			v4 += X[i][j]


	v1/=(25*25)
	v2/=(25*11)
	v3/=(25*11)
	v4/=(11*11)

	print v1,v2,v3,v4

	for i in range(25):
		for j in range(25):
			X[i][j] = v1
	for i in range(25):
		for j in range(25,36):
			X[i][j] = v2
	for i in range(25,36):
		for j in range(25):
			X[i][j] = v3
	for i in range(25,36):
		for j in range(25,36):
			X[i][j] = v4
	greyplot(X)

	Y = [[v1,v2],[v3,v4]]
	greyplot(Y)

def partition(data,lbl):
	num_buckets = 10
	bucket_per_class = 5
	bucket = []
	bucket1=[]
	bucket2=[]
	for i in range(num_buckets):
		bucket.append([])
	for i in range(len(data)):
		if lbl[i]==1:
			bucket1.append(i%bucket_per_class)
			#bucket[i%bucket_per_class].append(data[i])
		else:
			bucket2.append(i%bucket_per_class + bucket_per_class) 
			#bucket[i%bucket_per_class + bucket_per_class].append(data[i])

	random.shuffle(bucket1)
	random.shuffle(bucket2)
	bucket1 += bucket2

	for i in range(len(data)):
		bucket[bucket1[i]].append(data[i])
		
	for i in bucket:	
		print len(i)
	return bucket

def cosim2(bucket1,bucket2):
	X = pairwise_distances(bucket1,bucket2,metric='cosine')
	#greyplot(X)
	tot = 0.0
	
	for i in range(len(bucket1)):
		for j in range(len(bucket2)):
			tot += X[i][j]
	tot /= len(X)*len(X[0])	
	return tot

def plotForBuckets(buckets):
	X = []
	
	for i in range(len(buckets)):
		Y=[0]*len(buckets)
		X.append(Y)

	#X = [[0]*len(buckets)]*len(buckets)

	for i in range(len(buckets)):
		for j in range(len(buckets)):
			X[i][j]=cosim2(buckets[i],buckets[j])
			
	#print X
	print len(X),len(X[0])
	greyplot(X)

	'''
	m1=0.0
	for i in X:
		m1=max(m1,max(i))
	for i in range(len(X)):
		for j in range(len(X[i])):
			X[i][j] = (X[i][j]*255.0)/m1
	greyplot(X)
	'''

if __name__=='__main__':
	s = raw_input()

	data,lbl = readData(s)
	print len(data),len(lbl)
	
	bucket=partition(data,lbl)
	plotForBuckets(bucket)

	pca = PCA(n_components=10)
	P1 = pca.fit_transform(data)	
	bucket=partition(data,lbl)
	plotForBuckets(bucket)
	'''
	cosim(data)
	pca = PCA(n_components=10)
	P1 = pca.fit_transform(data)
	cosim(P1)
	'''


