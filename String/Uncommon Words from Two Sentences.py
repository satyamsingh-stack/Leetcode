def solution(s1,s2):
    res=s1.split(' ')+s2.split(' ')
    d={}
    for i in res:
        if(i in d):
            d[i]+=1
        else:
            d[i]=1
    temp=[]
    for i in d:
        if(d[i]==1):
            temp.append(i)
    return temp
st1=input()
st2=input()
print(solution(st1,st2))
