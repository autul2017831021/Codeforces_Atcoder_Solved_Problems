from math import *
def isprime(n,nn):
    for i in range(2,nn):
        if n%i==0:
            return False
    return True

def solution():
    n=int(input())
    a=[]
    m=int(1)
    m=m+n
    while True:
        if len(a)==2:
            break
        mm=int(sqrt(m))+1
        if isprime(m,mm):
            a.append(m)
            m=m+n
        else:
            m+=1
    ans=a[0]*a[1]
    print(ans,end='\n')
    
t=int(input())
while t>0:
    t-=1
    solution()

