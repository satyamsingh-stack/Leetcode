def leftrotation(st,d):
    return st[d%len(st):]+st[:d%len(st)]
def rightrotation(st,d):
    return st[len(st)-d%len(st):]+st[:len(st)-d%len(st)]
if(__name__=='__main__'):
    st=input()
    d=int(input())
    print(leftrotation(st,d))
    print(rightrotation(st,d))