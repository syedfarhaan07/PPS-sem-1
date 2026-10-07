#include <stdio.h>

int main()
{
    int Deci,Hexa=0,i=1,rem;
    printf("Enter number in decimal: ");
    scanf("%d",&Deci);
    while(Deci!=0)
    {
        rem=Deci%16;
        Hexa=Hexa+rem*i;
        i=i*10;
        Deci=Deci/16;
    }
    printf("Hexa=%d",Hexa);
    return 0;
}

