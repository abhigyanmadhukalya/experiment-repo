def printTax(price):
    tax = price * 0.21
    print("tax:" + tax)

printTax(500)
#########################################################

def calculateTax(price):
    return price * 0.21

result = calculateTax(100)
print(result)

## Reusing the function using variables

bread = 100
milk = 50

breadTax = str(calculateTax(bread))
milkTax = str(calculateTax(milk))

print("Tax for bread is " + breadTax)
print("Tax for milk is " + milkTax)
#########################################################

## Multiple parameters

def displayInfo(name, age, country):
    print(name + " is " + str(age) + " years old and is from " + country)

displayInfo("Abhigyan", 17, "India")
#########################################################


