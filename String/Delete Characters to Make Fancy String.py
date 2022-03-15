def solution(st):
    temp=[]
    for i in st:
        if(len(temp)>1 and temp[-2]==temp[-1]==i):
            continue
        temp.append(i)
    return "".join(temp)
st=input()
print(solution(st))