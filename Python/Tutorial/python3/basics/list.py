# List --> Ordered, Mutable, allows duplicate elements

list1 = ["banana", "apple", "cherry"]
print(list1[::-1])  # This reverses the order of the list
print(list1[0])     # Lists start with an index of zero

# ------------------------------------------------------------

list_org = ["banana", "apple", "cherry"]
list_cpy = list_org
list_cpy2 = list_org.copy()     # Makes a copy in a diff memory address

list_cpy.append("lemon")

# The two list refer to the same memory address
print(list_cpy)
print(list_org)
print(list_cpy2)

# ------------------------------------------------------------

# List comprehension (fast way to make a copy)

a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
b = [i*i for i in a]
print(a)
print(b)
