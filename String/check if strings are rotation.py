def solution(st1,st2):
    st1=st1+st1
    if(st1.find(st2)>=0):
        return True
    else:
        return False


st1=input()
st2=input()
print(solution(st1,st2))