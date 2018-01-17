#include <stdio.h>
#include <string.h>

void main(){
   char s[50],x[50],y[]="kritan";
   int i;
   strcpy(s,y);
   for(i=0;y[i]!=0;i++){
    x[i]=y[i];
   }
   printf("the string copied using strcpy is:\"%s\"\nthe string copied without using strcpy is:\"%s\"",s,x);
}
