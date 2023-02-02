#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
printf("Enter a number:");
scanf("%d",&n);
printf("%d",fact(n));
return 0;
}



int fact(int n)
{
 if(n==0 || n==1)
    return 1;
    else
     return n*fact(n-1);
}
