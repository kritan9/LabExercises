#include <stdio.h>


int main()
{
    int a,b,temp;
    printf("Enter values of a and b");
    scanf(" %d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After swapping, values are: a=%d  b=%d",a,b);
	getch();
    return 0;
}
