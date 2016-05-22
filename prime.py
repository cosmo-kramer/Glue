def pr_prime(n) : int
	for i in range(2,n):
		f = 0
		for j in range(2,i-1):
			if i%j==0 :
				f = 1
				
		if not f:
			print i,"\n"

num = int(raw_input("Num?")) : int
print num
pr_prime(num)
