# itertools is a module that contains a set of tools that can be used to create iterators

from itertools import count, cycle, repeat, product, permutations, combinations, combinations_with_replacement
from itertools import accumulate, groupby

# Product
a = [1, 2, 3]
b = [4, 5, 6]
print(str(list(product(a, b, repeat=2))) + "\n")  # Prints the product of a and b

# Permutations
prem = permutations(a)
print(f"The possible permuations of a are: {list(prem)}\n")  # Prints the permutations of a

# Combinations
comb = combinations(a, 2)
print(f"The possible combinations of a are: {list(comb)}\n")  # Prints the combinations of a

# Combinations with replacement
comb_wr = combinations_with_replacement(a, 2)
print(f"The possible combinations with replacement of a are: {list(comb_wr)}\n")  # Prints the combinations with replacement of a

# Accumulate
acc = accumulate(range(0, 10))
print(f"The accumulated values of a are: {list(acc)}\n")  # Prints the accumulated values of a

# Groupby
a = [x for x in range(0, 4)]
group_obj = groupby(a, lambda x: x < 3)
for key, value in group_obj:
    print(key, list(value))
