def f(n): int
	print n

def p(x,n): int int
	if n == 0:
		return 1
	elif n == 1:
		return x
	else:
		r = p(x,n/2) : int
		return r*r*p(x,n%2)


b = int(raw_input("base?")) :int
e = int(raw_input("exp?")) :int
print p(b,e)
