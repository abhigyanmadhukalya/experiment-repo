# Collections: nameTuple, orderedDict, defaultdict, counter
from collections import Counter, namedtuple, defaultdict

# Counter
a = "aaaaabbbbbbcccccc"
my_counter = Counter(a)
print(my_counter.items())  # Prints the items in the counter
print(my_counter.keys())  # Prints the keys in the counter
print(my_counter.values())  # Prints the values in the counter
print(my_counter.most_common(1))  # Prints the most common item in the counter
print(my_counter.most_common(1)[0][0])  # Prints the most common letter in the string

# Named Tuple
Point = namedtuple("Point", "x, y")
pt = Point(12, -400)
print(pt)  # Prints the named tuple
print(pt.x, pt.y)  # Prints the named tuple values

# defaultdict
d = defaultdict(int)
d["a"] = 1
d["b"] = 2
d["c"] = 3
print(d["a"])  # Prints the value of a
print(d["c"])  # Prints the default value of c