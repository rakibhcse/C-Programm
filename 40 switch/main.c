#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit;

    printf("Please Enter a digit:");
    scanf("%d",&digit);

    switch(digit)

    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
           break;
    case 4:
        printf("Four\n");
           break;
    case 5:
        printf("Five\n");
           break;
    case 6:
        printf("Six\n");
           break;

           default:
           printf("Not a valid digit");

 case 10:
        printf("Ten\n");
           break;

    }

    return 0;
}
