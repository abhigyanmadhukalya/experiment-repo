try:
    x = int(input("Input an integer: "))
    print(x)
except ValueError: # Will only raise exception for ValueError
    print("Value not an integer")
else:
    print("Nothing went wrong")
finally:
    print("Try except finished")
