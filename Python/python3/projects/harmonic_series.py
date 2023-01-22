from math import fsum
from fractions import Fraction

n = int(input("Enter range of 'n': "))
numbers = [Fraction(1, i * i * i) for i in range(1, n + 1)]

print(f"The sum of the given harmonic series is {fsum(numbers):.4f}")
