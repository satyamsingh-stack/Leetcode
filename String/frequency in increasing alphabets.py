def solution(st1):
    s1=[0]*26
    for i in range(len(st1)):
        s1[ord(st1[i])-ord('a')]+=1
    for i in range(26):
        if(s1[i]>0):
            print(chr(i+97),s1[i])

st1=input()
print(solution(st1))
