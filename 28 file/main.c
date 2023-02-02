#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *file;
 file=fopen("test.txt","w");
 if(file==NULL)
 {
  printf("file doesnt exist");
 }
 else
 {
  printf("file is opened");
  fclose(file);
 }
 getch();
}
