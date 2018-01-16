#include <stdio.h>
int a=5;
void qwe();
int main()
{
    int b=9,i;
    printf(" global variable a = %d\n local variable b = %d\n",a,b);
    puts("in another user defined function:");
    puts("---------------------------------");
    qwe();
    printf("global variable a=%d is same in both functions\n",a);
    for(i=1;i<5;i++)
    {
        static int c=10;
        c++;
        printf("c=%d\n",c);
    }
    printf("even if c is declared 10 in each loop its \nvalue goes on increasing by operator ++ \nbecause c is static variable and it can be declared only once");
    return 0;
}
void qwe()
{
    int b;
    printf(" global variable a = %d\n local variable b = %d\n",a,b);
}
