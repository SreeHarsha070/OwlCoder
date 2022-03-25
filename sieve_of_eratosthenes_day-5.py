def remov(prime):
    l=[]
    for i in prime:
        if(bool(i)):
            l.append(i)
    return len(l)
def is_prime(n):
    prime = [True for i in range(n + 1)]
    p = 2
    while(p*p<=n):
        if (prime[p] == True): 
            for i in range(p ** 2, n + 1, p):
                prime[i] = False
        p+=1
    prime[0]= False
    prime[1]= False
    return remov(prime)
t=int(input())
for k in range(0,t):
    n=int(input())
    print(is_prime(n))