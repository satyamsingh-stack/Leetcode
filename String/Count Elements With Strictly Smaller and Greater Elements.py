l=list(map(int,input().split()))
count=0
mi=min(l)
ma=max(l)
for i in range(len(l)):
    if(l[i]>mi and l[i]<ma):
        count+=1
print(count)