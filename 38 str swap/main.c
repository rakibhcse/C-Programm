#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str1[30]="bangladesh";
  char str2[30]="India";
  char temp[30];

  printf("Before swaping\n");
  printf("str1=%s\n",str1);
  printf("str2=%s\n",str2);

  strcpy(temp,str1);
  strcpy(str1,str2);
  strcpy(str2,temp);

  printf("After swaping\n");
  printf("str1=%s\n",str1);
  printf("str2=%s\n",str2);
}
