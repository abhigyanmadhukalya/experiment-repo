from types import prepare_class


class Person:
  def __init__(self, name, age):
      self.name = name
      self.age = age
  def print_info(self):
      print(self.name)
      print(self.age)

class Teacher(Person):
  def __init__(self, name, age, subject):
      self.subject = subject

      Person.__init__(self, name, age)

class Student(Person):
    def __init__(self, name, age, grade):
        self.grade = grade

        Person.__init__(self, name, age)

myTeacher = Teacher("Dr Takuya", 38, "Computer Science")
myTeacher.print_info()
print(myTeacher.subject, "\n")

mySelf = Student("Abhigyan Madhukalya", 17, "XI-JEE/NEET")
mySelf.print_info()
print(mySelf.grade)
