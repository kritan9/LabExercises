#include <stdio.h>


int main()
{
    int a,b;
    printf("Enter values of a and b");
    scanf(" %d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swapping, values are: a=%d  b=%d",a,b);
	getch();
    return 0;
}
