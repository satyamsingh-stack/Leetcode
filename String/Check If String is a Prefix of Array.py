def solution(st,st1):
    ans=''
    for i in st1:
        ans=ans+i
        if(ans==st):
            return True
        if(not st.startswith(ans)):
            break
    return False
st=input()
st1=list(map(str,input().split()))
print(solution(st,st1))