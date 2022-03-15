def solution(st,k):
    temp=[]
    for i in st:
        if(st.count(i)==1):
            temp.append(i)
    if(len(temp)>=k):
        return temp[k-1]
    else:
        return ""
st=list(map(str,input().split()))
k=int(input())
print(solution(st,k))