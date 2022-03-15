l=["++X","++X","X++"]
ans=0
for i in range(len(l)):
    if(l[i]=='--X' or l[i]=='X--'):
        ans=ans-1
    elif(l[i]=='++X' or l[i]=='X++'):
        ans=ans+1
print(ans)