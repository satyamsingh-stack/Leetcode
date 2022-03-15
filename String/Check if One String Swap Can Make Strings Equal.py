def solution(st1,st2):
    c=0
    for i in range(len(st1)):
        if(st1[i]!=st2[i]):
            c=c+1
    st1=sorted(st1)
    st2=sorted(st2)
    if(c==0 or c==2 and st1==st2):
        return True
    return False
st1=input()
st2=input()
print(solution(st1,st2))