def solution(name,typed):
    j = 0
    i = 0
    n = len(name)
    t = len(typed)
    while j < t:
        if i < n and name[i] == typed[j]:
            i += 1
        elif j == 0 or typed[j] != typed[j - 1]:
            return False
        j += 1
    return i == n
st1=input()
st2=input()
print(solution(st1,st2))
