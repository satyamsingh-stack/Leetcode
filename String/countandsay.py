def countandsay(n):
    if(n==1):   return "1"
    if(n==2):   return "11"
    s="11"
    for i in range(3,n+1):
        t=""
        s=s+'$'
        c=1
        for j in range(1,len(s)):
            if(s[j-1]!=s[j]):
                t=t+str(c)+s[j-1]
                c=1
            else:
                c=c+1
        s=t
    return s
n=int(input())
print(countandsay(n))