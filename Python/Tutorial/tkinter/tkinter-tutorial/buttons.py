from tkinter import *

root = Tk()

def click():
    myLabel = Label(root, text="Joe Mama")
    myLabel.pack()

myButton = Button(root, text="Click ME!", padx=50, command=click)
myButton.pack()

root.mainloop()
