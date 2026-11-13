#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

#define PI 3.14159265358979

int main()
{
    double r, P, S;

    printf("Enter radius r: ");
    scanf("%lf", &r);

    P = 2 * PI * r;
    S = PI * r * r;

    printf("Perimeter P = %.4lf\n", P);
    printf("Area S = %.4lf\n", S);

    return 0;
}