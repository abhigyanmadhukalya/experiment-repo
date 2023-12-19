import pickle
import json

install()

class Fruit:
    def __init__(self, name, calories) -> None:
        self.name = name
        self.calories = calories

    def describe_fruit(self):
        print(self.name, self.calories, sep=" : ")

if __name__ == '__main__':
    fruit = Fruit("Banana", 100)
    fruit.describe_fruit()

    fruit.calories = 150

    with open("banana.json", "w") as file:
        data = {"name": fruit.name, "calories": fruit.calories}
        json.dump(data, file)

    with open("banana.json", "r") as file:
        data = json.load(file)
        print(data)