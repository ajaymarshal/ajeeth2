#include <stdio.h>
#include <math.h>
int main()
{
     int a1, d1, n1, i, t;
     int sum = 0;
     printf("Enter the first term value of the A.P. series: ");
     scanf("%d", &a1);
     printf("Enter the total numbers in the A.P. series: ");
     scanf("%d", &n1);
     printf("Enter the common difference of A.P. series: ");
     scanf("%d", &d1);
     sum = (n1 * (2 * a1 + (n1 - 1)* d1 ))/ 2;
     t = a1 + (n1 - 1) * d1;
     printf("Sum of the A.P series is: ");
     for (i = a1; i <= t; i = i + d1 )
     {
          if (i != t)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
