#include <stdio.h>

int main(){
   int a=0,b=1,c=1;
   printf("Fibonacci Sequence \n");
   printf(" %d ",a);
   while(c<=300){
        printf(" %d ",c);
        c=a+b;
        a=b;
        b=c;
   }


    getch();
    return 0;
}

