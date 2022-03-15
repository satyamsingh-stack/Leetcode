def solution(n,k,st):
    ans=0
    st=list(st)
    for i in range(len(st)):
        if(st[i]!=st[len(st)-i-1]):
            st[i]=st[len(st)-i-1]
            ans=ans+1
    res=k-ans
    if(res>=0 and res%2==0):
        print("YES")
    elif(res>=0 and n%2==1):
        print("YES")
    else:
        print("NO")
t=int(input())
for i in range(t):
    n, k = map(int, input().split())
    st=input()
    solution(n,k,st)