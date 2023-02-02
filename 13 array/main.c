#include <stdio.h>
#include <stdlib.h>
int main()
{ int n ,m,matches[100][100],i,j,sum=0;
double avg=0,avg1;

scanf("%d %d ",&n,&m);
for(i=0;i<n;i++)
{
 for(j=0;j<m;j++)
{
 scanf("%d",&matches[i][j]);
}
}
for(i=0;i<n;i++)
{
 for(j=0;j<m;j++)
 {
  sum=sum+matches[i][j];
 }
 avg1=(double)sum/m;
 sum=0;
 if(avg<avg1)
 {
  avg=avg1;
 }
}
printf("Best avg;%.03lf\n",avg);
return 0;
}

























