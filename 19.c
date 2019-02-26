#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    if (n < 0)
        printf(" Factorial of a negative number ");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;             
        }
        printf("Factorial  %d = %llu", n, factorial);
    }
    return 0;
}
