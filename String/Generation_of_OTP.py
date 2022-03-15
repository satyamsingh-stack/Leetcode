def OTP(st):
    n=len(st)
    ans=''
    for i in range(n):
        ans=ans+str(int(st[i])**2)
    return ans[0:4]
st=input()
print(OTP(st))
