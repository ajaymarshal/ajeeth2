#include <stdio.h>
int main()
{
    int n, c, sum = 0;

    printf("Enter the value of n(positive integer): ");
    scanf("%d",&n);

    for(c=1; c <= n; c++)
    {
        sum = sum + c;
    }

    printf("Sum of first %d natural numbers is: %d",n, sum);

    return 0;
}
