#include <stdio.h>
#include <stdlib.h>

int main()
{


char str1[100],str2[100],temp1[100],temp2[100];

int d1,d2;

gets(str1);
gets(str2);

strcpy(temp1,str1);
strcpy(temp2,str2);

strrev(temp1);
strrev(temp2);

d1=strcmp(str1,temp1);
d2=strcmp(str2,temp2);

if(d1==0 && d2==0);
printf("Yes,Palindrome\n");

else
 printf("Oh,No\n");

}
