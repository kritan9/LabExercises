#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
   /* int a,length,c=0,i=0;

    printf("Enter an integer with two or more digits \n");
    scanf(" %d",&a);
    length=1+(int)log10(a);

    while(i<length){
        c = c + (a%10)*pow(10,length-1-i);
        a=(a-a%10)/10;
        i++;

    }*/
    int a,c=0;
    printf("Enter an integer with two or more digits \n");
    scanf(" %d",&a);
    while(a!=0){
        c=c*10+(a%10);
        a/=10;

    }
    printf("The reversed number is %d",c);
	getch();
    return 0;

}
