def moveDisk(fp,tp): s s
    print "moving disk from",fp,"to",tp

def moveTower(height,fromPole, toPole, withPole): int s s s 
    if height >= 1: 
        moveTower(height-1,fromPole,withPole,toPole)
        moveDisk(fromPole,toPole)
        moveTower(height-1,withPole,toPole,fromPole)

a="A" : s
b="B" : s
c="C" : s
moveTower(3,a,b,c)
