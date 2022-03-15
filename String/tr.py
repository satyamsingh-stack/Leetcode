a,b= [int(i) for i in input().split()]
cool = [0] + [int(i) for i in input().split()]
cutooff = [-1] + [-1 for i in range(a)]
praj = set()
res = []
for i in range(b):
    id, p, q, r, s = input().split(",")
    id = int(id[8:])
    p = float(p)
    q = int(q[2:])
    r = int(r[2:])
    s = int(s[2:])
    res.append([p, id, 1, q])
    res.append([p, id, 2, r])
    res.append([p, id, 3, s])
res.sort(key=lambda x: (-x[0], x[1], x[2]))

for i in res:
    if i[1] not in praj:
        if cool[i[3]] > 0:
            cool[i[3]] -= 1
            cutooff[i[3]] = i[0]
            praj.add(i[1])
cool = [[cool[i], i, cutooff[i]] for i in range(1, len(cool))]
cool.sort(key=lambda x:(-x[0], x[1], x[2]))
s = 0
for i in res:
    if i[1] not in praj:
        while s < len(cool) and cool[s][0] <= 0:
            s += 1
        if s < len(cool):
            cool[s][0] -= 1
            if cool[s][2] == -1:
                cool[s][2] = 100
            cool[s][2] = min(cool[s][2], i[0])
            praj.add(i[1])
cool.sort(key=lambda x:-x[2])

for i in cool:
    if i[2] != -1:
        print("C-" + str(i[1]), i[2])
    else:
        print("C-" + str(i[1]), "n/a")