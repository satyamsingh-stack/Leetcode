def solution(st1,st2,st3):
    st1=st1.split()
    st2=st2.split()
    st3=st3.split()
    c=0
    for i in st1:
        if(i not in st2 and i not in st3):
            c=c+1
    return c
st1=input()
st2=input()
st3=input()
print(solution(st1,st2,st3))