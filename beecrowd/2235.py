valores = list(map(lambda x: int(x), input().split()))
valores.sort()
res = "N"

if (valores[0] == valores[1]):
    res = "S"
elif (valores[1] == valores[2]):
    res = "S"
else:
    if (valores[0] + valores[1] == valores[2]):
        res = "S"

print(res)