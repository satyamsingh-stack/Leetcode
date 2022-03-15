def generate(a,b):
    ans=''
    sum1 = 0
    sum2 = 0
    for i in range(len(a)):
        if(i%2==0):
            sum1=sum1+int(a[i])**2
        else:
            sum2=sum2+int(a[i])
    ans=str(sum1)+str(sum2)
    if(len(ans)<int(b)):
        return str(-1)
    else:
        return ans[len(ans)-int(b):]

a,b=input().split()
print(generate(a,b))

