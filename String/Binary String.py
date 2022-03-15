def solution(st):
    ans=0
    for i in range(len(st)):
        if(st[i]=='1'):
            ans=ans+1
    return ans*(ans-1)//2
st=input()
print(solution(st))
