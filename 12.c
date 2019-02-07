#include <stdio.h>
int main()
{
   int n, reverse = 0, t;
   printf("Enter a number :\n");
   scanf("%d", &n);
   t = n;
   while (t != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t = t/10;
   }
   if (n == reverse)
      printf("yes");
   else
      printf("no");
   return 0;
}
