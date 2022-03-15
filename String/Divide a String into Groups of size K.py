def solution(st,n,fill):
    temp=[]
    ans=''
    for i in range(0,len(st),n):
        ans=ans+st[i:i+n]
        if(len(ans)==n):
            temp.append(ans)
            ans=''
        else:
            l2=n-len(ans)
            temp.append(ans+(l2*fill))
    return temp
st=input()
n=int(input())
fill=input()
print(solution(st,n,fill))