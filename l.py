l = [3,4,2,1] : vector<int>

s=0
for u in l:
	s = s+1

for j in l:
	for i in range(0,s-2):
		if l[i]<l[i+1]:
			a=l[i] : int
			l[i]=l[i+1]
			l[i+1]=a

for u in l:
	print u	
