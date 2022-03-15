def solution(st):
    temp=[]
    d=dict()
    for i in range(len(st)):
        ans=tuple(sorted(st[i]))
        if(ans not in d):
            d[ans]=[st[i]]
        else:
            d[ans].append(st[i])
    for i in d.values():
        temp.append(i)
    return temp
l=list(map(str,input().split()))
print(solution(l))