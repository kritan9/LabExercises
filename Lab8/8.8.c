#include <stdio.h>
#include <string.h>

void main(){
   char s[50],x[50];
   int k;
   printf("enter first string ");
   scanf(" %s",s);
   printf("enter second string ");
   scanf(" %s",x);
   k=strcmp(s,x);
 if(k==0) printf("The strings are equal");
 else printf("\"%s\" is greater alphabetically than \"%s\"",k>0?s:x,k>0?x:s);

}
