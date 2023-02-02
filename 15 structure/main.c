#include <stdio.h>
#include <stdlib.h>

struct person
{
 char name[50];
 int age;
 float salary;
};
int main()
{
 struct person person[3];
 int i;
 for(i=0;i<3;i++)

 {
  //input

  print("Enter info for person %d\n",i+1);

  printf("Enter name:");
  fflush(stdin);
  gets(person[i].name);
  printf("enter Age:") ;
  scanf("%d",&person[i].age);
  printf("enter salary:");
  scanf("%f",&person[i].salary);

 }

 //output
 for(i=0;i<3;i++)

  printf("\n Info for person %d\n",i+1);
 printf("name:%s\n",person[i].name);
 printf("Age:%d\n",person[i].age);
 printf("salary:%f\n",person[i].salary);

getch();

}


