#include <stdio.h>

int main()
{
    float radius, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14 * radius;

    printf("Circumference = %.2f", circumference);

    return 0;
}
