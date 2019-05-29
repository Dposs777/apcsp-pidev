#include <stdio.h>
#include "student.h"
#include <string.h>


void printStudent(struct Student* student)
{
  printf("%s %s\n", student->firstname, student->lastname);
  printf("  age:%d\n", student->age);
  printf("  id:%d\n", student->studentid);


}

void addStudent(struct Student* student, char first[50], char last[50], int age, int id){
  strcpy(student->firstname, first);
  strcpy(student->lastname, last);
  student->age = age;
  student->studentid = id;

}
