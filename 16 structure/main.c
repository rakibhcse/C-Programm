#include <stdio.h>
#include <stdlib.h>
//global structure
struct person
{

int age;
float salary;
};
int main()
{
  struct person person1,person2;

  printf("Enter info for person1\n");

  printf("Enter age=\n");
  scanf("%d",&person1.age);

  printf("Enter salary=\n");
  scanf("%f",&person1.salary);


    printf("person1:\n");
    printf("Age=%d\n",person1.age);
    printf("salary=%.2f\n",person1.salary);

     printf("Enter info for person2\n");

  printf("Enter age=\n");
  scanf("%d",&person2.age);

  printf("Enter salary=\n");
  scanf("%f",&person2.salary);


    printf("person2:\n");
    printf("Age=%d\n",person2.age);
    printf("salary=%.2f\n",person2.salary);



    getch();
}
