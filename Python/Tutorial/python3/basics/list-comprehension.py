import rich

list1 = []
for i in range(5):
    list1.append(i*i)
rich.print(list1)

# OR

list2 = [i*i for i in range(5)]
rich.print(list2)

def cubes(i):
    return i*i*i

list3 = [cubes(i) for i in range(5)]
rich.print(list3)

evens = [i for i in range(20) if i%2 == 0]
rich.print(evens)

odds = [i for i in range(10) if i%2 == 1]
rich.print(odds)
