#include <stdio.h>
int main()
{
int i,n,f;
printf("Enter your n value: ");
scanf("%d",&n);
 if (n<0)
 {
    printf("No factorial");
 }
else
{
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial=%d",f);
}
return 0;
}
