def move(n,s,row,col,pos):
    ans=0
    for i in range(pos,len(s)):
        if(s[i]=='R'):
            col=col+1
        elif(s[i]=='L'):
            col=col-1
        elif(s[i]=='U'):
            row=row-1
        elif(s[i]=='D'):
            row=row+1
        if(row<0 or col<0 or row>=n or col>=n):
            return ans
        ans=ans+1
    return ans
def solution(n,startPos,s):
    temp=[]
    for i in range(len(s)):
        temp.append(move(n,s,startPos[0],startPos[1],i))
    return temp
n=int(input())
startPos=list(map(int,input().split()))
s=input()
print(solution(n,startPos,s))