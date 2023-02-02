#include <stdio.h>
#include <stdlib.h>
int square(int a)
{
 return a*a;
}


int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int result = square(num);
    printf("square is :%d\n",result);
}
