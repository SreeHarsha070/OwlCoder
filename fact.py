def fact(x):
    res=1
    for i in range(2,x+1):
        res=res*i
    return res
        
#5 res=1*2*3*4*5   
n=int(input())
r=int(input())
ans=(fact(n)//(fact(n-r)*fact(r)))%(10**9+1)
print(ans)


"""
Input: 

778 116

And Your Code's output is:

795119546574858310675898827667933352677506843752645...


Its Correct output is:

735309323


"""

