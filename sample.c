#include<stdio.h>  
 int main()  
 {  
   int num,count=0;  
   printf("Enter a number: ");  
   scanf("%d",&number);  
   while(number)  
   {  
     number=number/10;  
     count++;  
   }  
   printf("Total number of digits in a given number: %d",count);  
   return 0;  
 } 
