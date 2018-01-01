#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
    int a;
  printf("Enter an year");
  scanf(" %d",&a);
  if((a%4==0 && a%100!=0) || a%400==0) printf("leap Year");
  else printf("not leap year");
	getch();
    return 0;

}
