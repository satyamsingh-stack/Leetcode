def solution(words,allowed):
    c=0
    for i in range(len(words)):
        for j in range(len(words[i])):
            if(words[i][j] not in allowed):
                c=c+1
                break
    return len(words)-c
allowed=input()
words=list(map(str,input().split()))
print(solution(words,allowed))