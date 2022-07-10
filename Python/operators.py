x = input("What is the number? ")

x = int(x)

if x > 100:
    print("The number is greater than 100.")
elif 50 < x < 100:
    print("The number is greater than 50 but less than hunderd.")
elif x <= -1:
    print("Your number is a negative integer.")
elif x == 0:
    print("The number is zero.")
else:
    print("The number is less than 50.")
