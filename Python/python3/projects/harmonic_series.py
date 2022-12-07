from math import fsum

n = int(input("Enter range of 'n': "))
Numbers = []

for i in range(1, (n + 1)):
    numbers = f"1/(i*i*i)"
    Numbers.append(numbers)

Int_Numbers = [eval(i) for i in Numbers]
total_sum = fsum(Int_Numbers)
print(f"The sum of the given harmonic series is {total_sum}")
