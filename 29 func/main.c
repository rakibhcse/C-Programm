#include<stdio.h>
int square(int r)
{
 return r*r;
}
int main()
{
 int rkb;
 printf("Please Enter an entiger number:");
 scanf("%d",&rkb);
 int result=square(rkb);
 {
  printf("The sum by function is=%d\n",result);
 }
}
