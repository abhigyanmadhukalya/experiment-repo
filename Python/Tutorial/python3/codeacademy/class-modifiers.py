from getpass import getpass

userName = input("Enter your username: ")
userEmail = input("Enter your email address: ")
userPass = getpass("Enter your password: ")

class UserInfo:
    def __init__(self, username, userpass, useremail):
        self.username = userName
        self.userpass = userPass
        self.useremail = userEmail
    def show_user_info(self):
        print(f"Username: {self.username}, \nEmail Address: {self.useremail}")
    def get_user_password(self):
        buffer_pass = getpass("Enter your password to confirm it's you: ")
        if buffer_pass == self.userpass:
            print(self.userpass)
        else:
            print("The password's are not the same")

user1 = UserInfo(userName, userPass, userEmail)
user1.get_user_password()
