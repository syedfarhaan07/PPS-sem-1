#include <stdio.h>

int main()
{
    int m, n, i;

    printf("Enter m: ");
    scanf("%d", &m);

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = m; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
