from tkinter import Label, Tk

root = Tk()

myLabel = Label(root, text="Hello world").grid(row=0, column=0)
myLabel1 = Label(root, text="My name is Joe Mama").grid(row=1, column=0)

# The column number is relative
# myLabel.grid(row=0, column=0)
# myLabel1.grid(row=1, column=0)

root.mainloop()
