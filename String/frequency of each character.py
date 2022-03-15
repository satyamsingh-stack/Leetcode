st=input()
d=dict()
for i in st:
    if(i in d):
        d[i]=d[i]+1
    else:
        d[i]=1
print(d)