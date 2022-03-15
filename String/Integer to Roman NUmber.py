def solution(n):
    ans=''
    while(n):
        if(n>=1000):
            ans=ans+'M'
            n=n-1000
        elif(n>=900):
            ans=ans+'CM'
            n=n-900
        elif(n>=500):
            ans=ans+'D'
            n=n-500
        elif (n >= 400):
            ans = ans + 'CD'
            n = n - 400
        elif (n >= 100):
            ans = ans + 'C'
            n = n - 100
        elif(n>=90):
            ans=ans+'XC'
            n=n-90
        elif(n>=50):
            ans=ans+'L'
            n=n-50
        elif (n >= 40):
            ans = ans + 'XL'
            n = n - 40
        elif (n >= 10):
            ans = ans + 'X'
            n = n - 10
        elif(n>=9):
            ans=ans+'IX'
            n=n-9
        elif (n >= 5):
            ans = ans + 'V'
            n = n - 5
        elif(n>=4):
            ans=ans+'IV'
            n=n-4

        elif(n>=1):
            ans=ans+'I'
            n=n-1
    return ans
n=int(input())
print(solution(n))