#include <stdio.h>

typedef struct
{
  char name[25];
  char password[12];
  int id;
} User;

int main()
{

  // Typedef --> reserved keyword that gives an existing datatype a "nickname"

  User user1 = {"Abhigyan", "123456789", 123456789};
  User user2 = {"Someone", "123456789", 987654321};

  printf("User is %s with password %s with ID %d\n", user1.name, user1.password,
         user1.id);
  printf("User is %s with password %s with ID %d\n", user2.name, user2.password,
         user2.id);

  return 0;
}
