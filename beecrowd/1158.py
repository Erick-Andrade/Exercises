n = int(input())

for i in range(n):
    x, y = map(lambda x: int(x), input().split())
    if (x % 2 == 0):
        x += 1
    soma = 0
    while y > 0:
        y -= 1
        soma += x
        x += 2
    
    print(soma)
