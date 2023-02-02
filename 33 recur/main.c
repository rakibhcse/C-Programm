#include <stdio.h>
#include <stdlib.h>


int main()
{
 int n;
 printf("Enter a digit:");
 scanf("%d\n",&n);
 printf("Factorial of n =%d",n);
}
int fact(int n){
if(n==1)
 return 1;

else

 return n*fact(n-1);
}
