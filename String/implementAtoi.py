st=input()
flag=1
for i in range(len(st)):
    if(st[0]!="-" and (not (st[i].isdigit()))):
        flag=0
        break
if(flag):
    print(int(st))
else:
    print(-1)