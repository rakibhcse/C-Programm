#include <stdio.h>
#include <stdlib.h>

int main()
{

 int n,temp[100],i,pos=0,neg=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&temp[i]);
  if(temp[i]>0)
  {
   pos++;
  }
  if (temp[i]<0)
  {
   neg++;
  }
 }
 printf(" Positive Temp: %d and Negative temp:%d\n",pos,neg);
 return 0;



}
