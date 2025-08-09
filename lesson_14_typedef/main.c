#include <stdio.h>

typedef struct {
  char name[50];
  int age;

} Student;
int main() {
  Student s1 = {"Ali", 20};

  printf("%s %d\n", s1.name, s1.age);

  return 0;
}