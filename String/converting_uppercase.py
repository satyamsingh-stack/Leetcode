st=input()
ans=''
for i in range(len(st)):
    ch=ord(st[i])
    if(ch>96 and ch<123):
        ans=ans+chr(ch-32)
    else:
        ans=ans+chr(ch)
print(ans)