def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
def solution(st1,st2):
    n=len(st1)
    m=len(st2)
    l=gcd(n,m)
    result=st1[:l]
    if(result*(n//l)==st1 and result*(m//l)==st2):
        return result
    else:
        return ""
st1=input()
st2=input()
print(solution(st1,st2))
