#include <stdio.h>
#include <stdlib.h>

struct person
{
 int age;
 float salary;
};

int main()
{
 struct person person[4];
 int i;
 for(i=0;i<4;i++)

 {


 printf("Enter information for person %d\n",i+1);
 printf("enter age=");
 scanf("%d",&person[i].age);
 printf("enter salary=");
 scanf("%f",&person[i].salary);
}

for(i=0;i<4;i++)

 {


 printf("\nInformation for person %d\n",i+1);
 printf("age=%d\n",person[i].age);
 printf("salary=%f\n",person[i].salary);

}




