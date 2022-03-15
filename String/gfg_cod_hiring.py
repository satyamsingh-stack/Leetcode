def solution(n,s,l):
    count1=0
    count0=0
    for i in range(len(s)):
        if(s[i]=='1'):
            count1=count1+1
        elif(st[i]=='0'):
            count0=count0+1
    if(count1==count0):
        return 0
    ans=[]
    s=list(s)
    sum1=0
    sum2=0
    res=[]
    if(s[0]==s[1]):
        for i in range(0,len(s),2):
            if(s[i]==s[i+1]):
                pass
            else:
                s[i+1]=s[i]
                ans.append(i+1)
        for i in ans:
            sum1=sum1+l[i]
        return sum1
    elif(s[0]!=s[1]):
        for i in range(0,len(s)):
            if(s[i]==s[i+2]):
                pass
            else:
                s[i+2]=s[i]
                res.append(i+1)
        for i in res:
            sum2=sum2+l[i]
        return sum2
n=int(input())
st=input()
l=[]
for i in range(n):
    a=int(input())
    l.append(a)
print(solution(n,st,l))