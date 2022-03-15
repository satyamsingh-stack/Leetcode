def solution(s):
    acount = s.count('a')
    bcount = s.count('b')
    if (acount == 0):
        return True
    else:

        for i in range(acount):
            if (s[i] == 'b'):
                return False
        return True
st=input()
print(solution(st))