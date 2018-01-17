#include <stdio.h>
#include <string.h>

void main(){
   char s[50],x[50];
   printf("enter your first name ");
   scanf(" %s",s);
   printf("enter your last name ");
   scanf(" %s",x);
   strcat(s,x);
   printf("your name is %s",s);

}
