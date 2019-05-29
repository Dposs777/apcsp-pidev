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

  while(1){
      printf("Add a student:\n");
    fgets(input, 50, stdin);
    sscanf(input, "%s", name);
    printf("First name:\n");
    fgets(input, 50, stdin);
    sscanf(input, "%s", first);
    printf("Last name:\n");
    fgets(input, 50, stdin);
    sscanf(input, "%s", last);
    printf("Age:\n");
    fgets(input, 10. stdin);
    sscanf(input, "%d", &age);
    printf("School ID\n");
    fgets(input, 10, stdin);
    sscanf(input, "%d", &id);

    struct Student name;
    addStudent(&name, first, last, age, id);
    students[i] = name;

        printf("Done? y/n\n");
    fgets(inut, 50, stdin);
    sscanf(input, "%s", in);
    if(!(in[0] == 'n')) {break;};
 }

 for(int i = 0; i < sizeof(students); i++){
   printStudent(&students[i]);
 }
}
