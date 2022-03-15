def solution(st1,st2,st3):
    ans1=''
    ans2=''
    ans3=''
    for i in range(len(st1)):
        ans1=ans1+str(ord(st1[i])-ord('a'))
    for i in range(len(st2)):
        ans2=ans2+str(ord(st2[i])-ord('a'))
    for i in range(len(st3)):
        ans3=ans3+str(ord(st3[i])-ord('a'))
    a=int(ans1)+int(ans2)
    b=int(ans3)
    if(a==b):
        return True
    else:
        return False
st1=input()
st2=input()
st3=input()
print(solution(st1,st2,st3))