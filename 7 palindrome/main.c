#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str1[]="Abel";
   char str2[]="Baker";

   int i=0,len=0,j=0;
   while(str1[i]!='\0')
   {
    i++;
    len++;
   }
   for(j=0,i=len-1;i>=0;i--,j++)
   {
    str2[j]=str1[i];
   }
   str2[j]='\0';


   printf("str1=%s\n",str1);
   printf("str2=%s\n",str2);
   int r=strcmp(str1,str2);
   if (r==0)
    printf("palindrome");
   else
    printf("Not");
}
