#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
    int num;
    printf("Enter a number");
    scanf(" %d",&num);
    if(num%5==0)printf(" divisible by 5");
    else printf("not divisible by 5");
    printf("\n");
     if(num%7==0)printf(" divisible by 7");
    else printf("not divisible by 7");
    printf("\n");
     if(num%11==0)printf(" divisible by 11");
    else printf("not divisible by 11");
    printf("\n");

	getch();
    return 0;

}
