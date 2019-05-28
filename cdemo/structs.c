#include <stdio.h>
#include <string.h>

struct Student {
  char firstname[50];
  char lastname[50];
  int age;
  int studentid;
}

void printStudent(struct Student* student)
{
  printf("my student is -\n");
  printf("  firstname:%s\n", student->firstname);
  printf("  lastname:%s\n", student->lastname);
  printf("  age:%d\n", student->age);
  printf("  id:%d\n", student->studentid);


}

void addStudent(struct Student* student, char first[50], char last[50], int age, int id){
  strcpy(student->firstname, first);
  strcpy(student->lastname, last);
  student->age = age;
  student->id = id;

}

int main()
{
 struct Student student;
 addStudent(&student, "first", "last", 13, 673);
 printStudent(&student);
}

int main(){
  char input[50];

  char name[50];
  char first[50];
  char last[50];
  int age;
  int id;

  int i = 0;

  struct Student students[10];
  char in[10];
