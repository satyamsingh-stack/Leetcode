def largest(st,digits):
    for i in st:
        if(i.isdigit()):
            digits.add(i)
    temp=list(digits)
    temp.sort(reverse=True)
    if(int(temp[-1])%2!=0):
        for i in range(len(temp)-2,-1,-1):
            if(int(temp[i])%2==0):
                temp.append(temp.pop())
                break
    return "".join(temp)
st=input()
digits=set()
print(largest(st,digits))


