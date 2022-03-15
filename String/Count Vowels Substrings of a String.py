def solution(st):
    temp=set()
    c=0
    for i in range(len(st)):
        if(st[i] in "aeiou"):
            temp.add(st[i])
            for j in range(i+1,len(st)):
                if(st[j] in "aeiou"):
                    temp.add(st[j])
                else:
                    break
                if(len(temp)==5):
                    c=c+1
        temp=set()
    return c
word=input()
print(solution(word))