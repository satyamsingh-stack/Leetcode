def solution(st):
    temp=[0]*26
    for i in range(len(st)):
        temp[ord(st[i])-ord('a')]+=1
    val=temp[ord(st[0])-ord('a')]
    for i in range(26):
        if(temp[i] and temp[i]!=val):
            return False
    return True
st=input()
print(solution(st))