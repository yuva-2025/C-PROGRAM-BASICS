#include <stdio.h>
int main() {
    float l, b, a, p;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    a = l * b;
    p = 2 * (l + b);
    printf("Area = %.2f\nPerimeter = %.2f\n", a, p);
    return 0;
}
