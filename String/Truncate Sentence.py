def solution(st1,k):
    st1=st1.split()
    temp=''
    for i in range(k):
        if(i==0):
            temp=temp+st1[i]
        else:
            temp=temp+' '+st1[i]
    return temp
st1=input()
k=int(input())
print(solution(st1,k))