st=input()
ans=''
for i in range(len(st)):
    ch=ord(st[i])
    if(ch>64 and ch<91):
        ans=ans+chr(ch+32)
    else:
        ans=ans+chr(ch)
print(ans)