#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y,sum;
 int *ptr1,*ptr2;

 printf("enter the value of x:");
 scanf("%d",&x);
  printf("enter the value of y:");
 scanf("%d",&y);

ptr1=&x;
ptr2=&y;

 sum=*ptr1+*ptr2;
 printf("The sum is =%d\n",sum);



}
