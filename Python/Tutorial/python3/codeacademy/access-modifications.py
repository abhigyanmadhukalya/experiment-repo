# Public Class
class ClassSchedule:
    def __init__(self, course, instructor):
        self.course = course
        self.instructor = instructor

classSchedule1 = ClassSchedule("Chemistry", "Mr. Jason")
print(classSchedule1.course)

# Protected Class
class Student:
    def __init__(self, name, age, admission_number):
        self._name = name
        self._age = age
        self._admission_number = admission_number
    def displayCourse(self):
        print(f"Name: {self._name}, \nAge: {self._age}, \nAdmission Number: {self._admission_number}")

student1 = Student("Abhigyan", 17, 1930175)
student1.displayCourse()

# Private Class
class Address:
    def __init__(self, locality, city, country):
        self.__locality = locality
        self.__city = city
        self.__country = country
    def displayAddress(self):
        print(f"City: {self.__city}, \nLocality: {self.__locality}, \nCountry: {self.__country}")

address1 = Address("Shinjuku", "Tokyo", "Japan")
address1.displayAddress()

#This line below will show an Attribute Error as the method cannot be accessed outside the class
#print(address1.__locality)
