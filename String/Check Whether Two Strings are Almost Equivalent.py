def solution(st1,st2):
    l1=[0]*26
    l2=[0]*26
    for i in range(len(st1)):
        l1[ord(st1[i])-ord('a')]+=1
    for i in range(len(st2)):
        l2[ord(st2[i])-ord('a')]+=1
    flag=1
    for i in range(26):
        if(abs(l1[i]-l2[i])<=3):
            flag=1
        else:
            flag=0
            break
    return flag
st1=input()
st2=input()
print(solution(st1,st2))
