class sols:
	def hanoi(self,n,a,b,c): int s s s
		if n == 1:
			print "Move from disk",a ,"to",c,"\n"
		else:
			self.hanoi(n-1,a,c,b)
			print "Move from disk",a,"to",c,"\n"
			self.hanoi(n-1,b,a,c)

num = int(raw_input("")) : int

a = "a"
b= "b"
c= "c"
s = sols() : sols 
s.hanoi(num,a,b,c)
