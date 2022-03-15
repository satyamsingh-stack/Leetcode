def solution(st):
    for i in range(10,27):
        st=st.replace(str(i)+'#',chr(ord('j')-10+i))
    for i in range(1,10):
        st=st.replace(str(i),chr(ord('a')-1+i))
    return st
st=input()
print(solution(st))