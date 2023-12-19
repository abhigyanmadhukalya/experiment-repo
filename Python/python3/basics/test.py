import pickle

with open("s.dat", "wb") as f:
    for i in range(int(input("enter number of students: "))):
        pickle.dump(
            {
                "name": input("enter name: "),
                "marks": float(input("enter marks: ")),
                "roll_no": int(input("enter roll no: ")),
            },
            f,
        )

with open("s.dat", "+rb") as f:
    r = int(input("enter roll no to update the marks: "))
    found = False
    while True:
        try:
            pos = f.tell()
            s = pickle.load(f)
            if s["roll_no"] == r:
                found = True
                s["marks"] == int(input("enter new marks: "))
                f.seek(pos)
                pickle.dump(s, f)
                break
        except EOFError:
            break
    print("marks updated successfully" if found else "roll no not found")
