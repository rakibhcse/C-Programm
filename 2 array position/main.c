#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num[]={10,6,4,8,9,6,7};
   int value ,pos=-1,i;
   printf("Enter the value you want to search:");
   scanf("%d",&value);

   for(i=0;i<7;i++)
   {
    if (value==num[i])
    {
     pos=i+1;
     break;
    }
   }
   if(pos==-1)
    printf("Item is not found");
   else
    printf("the value is found at %d position ",pos);
}
