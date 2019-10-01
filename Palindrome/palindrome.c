#include <stdio.h>
 
int main()
{
   int num, reverse = 0, x;
 
   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d", &num);
 
   x = num;
 
   while (x != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + x%10;
      x = x/10;
   }
 
   if (num == reverse)
      printf("%d is a palindrome number.\n", num);
   else
      printf("%d isn't a palindrome number.\n", num);
 
   return 0;
}
