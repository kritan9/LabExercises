#include <stdio.h>

int main(){
    float num[10];
    int i;
    printf("Enter 10 floating numbers");
    for(i=0;i<=9;i++)
{
    scanf(" %f",num+i);
}
printf("The 10 numbers are: ");
 for(i=0;i<=9;i++)
{
    printf("\n %d) %f\n",i+1,*(num+i));
}
    return 0;
}
