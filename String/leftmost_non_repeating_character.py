def solution(st):
    for i in range(len(st)):
        flag=0
        for j in range(len(st)):
            if(st[i]==st[j] and i!=j):
                flag=1
                break
        if(flag==0):
            return i
    return -1
st=input()
print(solution(st))
