def solution(st):
    l=len(st)
    st1=''
    st2=''
    vowels=['a','e','i','o','u','A','E','I','O','U']
    for i in range(l//2):
        st1=st1+st[i]
    for i in range(l//2,l):
        st2=st2+st[i]
    c1=0
    c2=0
    for i in range(len(st1)):
        if(st1[i] in vowels):
            c1=c1+1
    for i in range(len(st2)):
        if(st2[i] in vowels):
            c2=c2+1
    return c1==c2

st=input()
print(solution(st))