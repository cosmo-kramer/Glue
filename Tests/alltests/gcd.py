def gcd(a, b): int int
    print a, b
    if b == 0:      
        return a
    else:
        return gcd(b, a%b)

inp = 80 :int
inp1 =  48 :int
a= gcd(inp, inp1) :int
print a
