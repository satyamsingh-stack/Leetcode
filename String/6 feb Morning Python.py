st=input()
temp1=[0]*128
temp2=[0]*128
for i in range(len(st)):
    if(st[i].isalpha()):
        temp1[ord(st[i])-ord('a')]+=1
    elif(st[i].isdigit()):
        temp2[ord(st[i])-ord('a')]+=1
ma1=max(temp1)
ma2=max(temp2)
index=abs(ma1-ma2)
st=list(st)
ch=st[index]
ans=''
for i in range(len(st)):
    if(st[i]==' '):
        ans=ans+'$'
    elif(st[i]!=ch):
        ans=ans+st[i]
print(ans)