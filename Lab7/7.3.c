#include <stdio.h>

int main(){
    int num[8];
    int i,sum=0;
    float average=0;
    printf("Enter 10 integers ");
    for(i=0;i<=7;i++)
{
    scanf(" %d",num+i);
}

 for(i=0;i<=7;i++)
{
    sum+=num[i];
    average+=((float)num[i]/8);
}
    printf(" The sum of numbers is %d and average is %f",sum,average);
    return 0;
}
