def solution(n):
    v1,v2,v3,v4,v5=1,1,1,1,1
    for i in range(n-1):
        v5=v5
        v4=v5+v4
        v3=v4+v3
        v2=v3+v2
        v1=v2+v1
    return v1+v2+v3+v4+v5
n=int(input())
print(solution(n))