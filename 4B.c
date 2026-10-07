#include <stdio.h>

int main()
{
    int Deci,Oct=0,i=1,rem;
    printf("Enter number in decimal: ");
    scanf("%d",&Deci);
    while(Deci!=0)
    {
        rem=Deci%8;
        Oct=Oct+rem*i;
        i=i*10;
        Deci=Deci/8;
    }
    printf("Octal=%d",Oct);
    return 0;
}
