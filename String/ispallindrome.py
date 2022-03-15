# st=input()
# st1=st[::-1]
# if(st==st1):
#     print("YES")
# else:
#     print("NO")

st=input()
flag=1
for i in range(len(st)):
    if(st[i]!=st[len(st)-i-1]):
        flag=0
        break
if(flag):
    print("Yes")
else:
    print("No")