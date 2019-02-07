#include <stdio.h>
#include <math.h>

int main()
{
    double base, exponent, result;
    printf("Enter a base number: ");
    scanf("%lf", &basevalue);
    printf("Enter an exponent: ");
    scanf("%lf", &exponentvalue);
    result = pow(basevalue, exponentvalue);
    printf("%.1lf^%.1lf = %.2lf", basevalue, exponentvalue, result);
    return 0;
}
