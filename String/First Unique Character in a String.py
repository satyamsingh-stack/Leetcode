def solution(st):
    temp=[0]*26
    for i in range(len(st)):
        temp[ord(st[i])-ord('a')]+=1
    for i in range(len(st)):
        if(temp[ord(st[i])-ord('a')]==1):
            return i
    return -1
st=input()
print(solution(st))