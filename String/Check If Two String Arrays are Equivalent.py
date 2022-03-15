l1=[]
l2=[]
n,m=map(int,input().split())
for i in range(n):
    a=input()
    l1.append(a)
for i in range(m):
    b=input()
    l2.append(b)
ans1=""
ans2=""
for i in range(len(l1)):
    ans1=ans1+l1[i]
for i in range(len(l2)):
    ans2=ans2+l2[i]
if(ans1==ans2):
    print("YES")
else:
    print("NO")