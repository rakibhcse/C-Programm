#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z,sum;
    float avg;
    printf("Please enter three number:");
    scanf("%d%d%d",&x,&y,&z);
    sum=x+y+z;
    avg=sum/3;
    printf("sum=%d",sum);
    printf("avg=%f",avg);

    return 0;
}
