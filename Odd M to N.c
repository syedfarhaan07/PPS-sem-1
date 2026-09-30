#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter m: ");
    scanf("%d", &m);

    printf("Enter n: ");
    scanf("%d", &n);

    do
    {
        if (m % 2 != 0)
            printf("%d ", m);

        m++;
    } while (m <= n);

    return 0;
}
