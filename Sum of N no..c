#include <stdio.h>

int main()
{
    int n, i, num, sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum = sum + num;
    }

    printf("Sum = %d", sum);

    return 0;
}
