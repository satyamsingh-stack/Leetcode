def solution(st1,st2):
    l=[]
    for i in st1:
        if(i in st2):
            l.append(i)
    l=set(l)
    l=list(l)
    s1=0
    s2=0
    for i in range(len(l)):
        s1=s1+st1.count(l[i])
        s2=s2+st2.count(l[i])
    return s1+s2
st1=input()
st2=input()
st1=st1.split()
st2=st2.split()
print(solution(st1,st2))