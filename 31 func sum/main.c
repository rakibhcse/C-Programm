#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b)
{
 return a+b;
}

int main()
{
   int rkb1,rkb2;
   printf("Please enter 2 number:");
   scanf("%d%d",&rkb1,&rkb2);
   int result=sum(rkb1,rkb2);
   printf("the summation is=%d",result);
    return 0;
}
