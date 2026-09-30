#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Logical AND = %d\n", a && b);
    printf("Logical OR = %d\n", a || b);
    printf("Logical NOT of first number = %d\n", !a);

    return 0;
}
