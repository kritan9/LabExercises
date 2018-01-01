#include <stdio.h>


int main()
{
   int x=2,z=4;
   int y=x++ + ++x;
   printf("a. y = %d \n",y);

   x=2,z=4;
   y=++x + ++x;
   printf("b.  y = %d \n",y);


   x=2,z=4;
   y=++x + ++x + ++x;
   printf("c.  y = %d \n",y);

   x=2,z=4;
   y= x>z;
   printf("d. y = %d \n",y);

   x=2,z=4;
   y= x>z ? x:z;
   printf("e. y = %d \n",y);

   x=2,z=4;
   y=x&z;
   printf("f.  y = %d \n",y);

   x=2,z=4;
   y=x>>2 +z<<1;
   printf("g. y = %d \n",y);
   getch();
   return 0;
}
