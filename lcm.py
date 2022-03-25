#Euclid's Algorithm
#LCM(x,y)=x*y/GCD(x,y)
#12,24 ->  24,12
#12,0



def computeGCD(x, y):
    while(y):
        x, y = y, x % y
    return x

def compute_lcm(a,b):
    t=(a*b)//computeGCD(a,b)
    return t
a,b=map(int,input().split())

g=computeGCD(a,b)
l=compute_lcm(a,b)
print("GCD",g,"LCM",l)
