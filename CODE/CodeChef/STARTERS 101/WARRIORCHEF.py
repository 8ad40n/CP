def IsPossible(e,H,X):
    for s in e:
        if s<=X:
            continue
        elif H>s:
            H-=s
        else:
            return False
    return True

def MinResistance(e,H):
    l,r=1,max(e)
    ans = -1
    
    while l<=r:
        m=(l+r)//2
        if IsPossible(e,H,m):
            ans=m
            r= m-1
        else:
            l= m+1
    return ans

t= int(input())
for i in range (t):
    N,H = map(int,input().split())
    A=list(map(int,input().split()))
    ans= MinResistance(A,H)
    print(ans)

    