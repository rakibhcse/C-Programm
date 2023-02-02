#include <stdio.h>
#include <stdlib.h>

int main()
{
 double a,b,c,s,area;
 printf("Enter values of triangle arm:");
 scanf("%f%f%f",&a,&b,&c);
 s=(a+b+c)/2;
 area=sqrt (s*(s-a)*(s-b)*(s-c));
 printf("area=%f",area);



    return 0;
}
