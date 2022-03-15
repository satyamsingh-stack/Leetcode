st=input()
l = len(st) // 2 + 1
while l:
    if '0' * l in st:
        print(False)
        break
    elif '1' * l in st:
        print(True)
        break
    l -= 1