import math

a = float(input("Enter value of 'a': "))
b = float(input("Enter value of 'b': "))
c = float(input("Enter value of 'c': "))

d = (b**2) - (4 * a * c)

solution1 = (-b + math.sqrt(d)) / (2 * a)
solution2 = (-b - math.sqrt(d)) / (2 * a)

print(f"Your solutions are: {solution1:.2f}, {solution2:.2f}")
