import sys

x = [i for i in range(1, 11)]

y = map(lambda i: i**2, x)

for i in y:
    print(i)
