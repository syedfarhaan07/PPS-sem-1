#include <stdio.h>
#include <math.h>

int main()
{
    int deci=0,bin,i=0,rem;
    printf("Enter number in Binary: ");
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        deci=deci+rem*pow(2,i);
        bin=bin/10;
        i++;
    }
    printf("decimal=%d",deci);
    return 0;
}

