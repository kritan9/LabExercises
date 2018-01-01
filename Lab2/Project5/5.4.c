#include <stdio.h>


int main()
{
   int a;
   printf("Enter a natural number\n");
   scanf(" %d",&a);
   (a%2==0)? printf("even") : printf("odd");
   return 0;
}
