# Class example

class Student:
    id = 10
    name = "Abhigyan"
    def display(self):
        print(self.id,self.name)

stu = Student()
stu.display()
###########################################################

# Init Method

class Worker:
    def __init__(self, name, age):
        self.name = name
        self.age = age

s1 = Worker("Abhi", 17)

print(s1.name)
print(s1.age)
###########################################################

class NewClass1:
    x = 100

#create object
r = NewClass1()
print(r.x)
###########################################################

class Student2:
    "This is a class"   # This is a docstring
    age = 14,
    def welcome(self):
        print("Hi, welcome to Section B")

print(Student2.age)
print(Student2.welcome)
print(Student2.__doc__)
###########################################################

# init function

class Student3:
    def __init__(self, name, dob):
        self.name = name
        self.dob = dob

s2 = Student3("Abhigyan", '30-06-2005')
print(s2.name)
print(s2.dob)

# modify object
s2.name = "Micheal"   # This changed the name of the Student in the object

# del s2
# The above command all objects from s2
###########################################################

class Animal:
    def __init__(self, name):
        self.name = name

    def greet(self):
        print("Hi, name is ", self.name)
a1 = Animal("Puppy")



