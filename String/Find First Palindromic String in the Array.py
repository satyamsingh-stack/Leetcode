def ispallindrome(st):
    flag=1
    for i in range(len(st)):
        if(st[i]!=st[len(st)-i-1]):
            flag=0
            break
    if(flag):   return 1
    else:   return 0
n=int(input())
l=[]
for i in range(n):
    st=input()
    l.append(st)
temp=""
for i in range(len(l)):
    ans=""
    for j in range(0,len(l[i])):
        ans=ans+l[i][j]
    if(ispallindrome(ans)):
        print(ans)
        temp=ans
        break
if(not ispallindrome(temp)):
    print(" ")