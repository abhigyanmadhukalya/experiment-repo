# Dictionaries --> Unorderec, Key-Value pairs, Mutable

import email


mydic = {"name": "Abhigyan", "age": 28, "city": "Tokyo"}
print(mydic)

# Placing keys as args
mydict = dict(name="Abhigyan", age=17, city="Tokyo")
print(mydict)

# Accessing keys
value = mydict["name"]      # Can access only one key at a time
print(value)

# Appending another key to dict
mydict["email"] = "amadhukalya2005@gmail.com"
print(mydict)

# Deleting a key
del mydict["name"]  # Using del keyword
print(mydict)

mydict.pop("age")   # Using method
print(mydict)

mydict.popitem()    # Removes the last item (or) key from the dict
print(mydict)

# Looping dict

for i in mydic.keys():  # For keys
    print(i)

for i in mydic.values():    # For values
    print(i)

# In a table
for i, j in mydic.items():
    print(i, j)

# Coping a dict
mydic_cpy = mydic.copy()
mydic_cpy["grade"] = "A"
print(mydic)
print(mydic_cpy)

# Merge dicts
dic1 = dict(name="Haruto", age=17, city="Tokyo")
dic2 = dict(name="Sakura", age=19, email="sakura@xyz.com")
print(dic1)
dic1.update(dic2)
print(dic1)     # Gets overwritten
