#include <stdio.h>

int main(){
int a,b,c,l,s;
printf("Input three numbers");
scanf(" %d %d %d",&a,&b,&c);
if(a>=b && a>=c){
   l=a;
   if(b<=c){  s=b ;}
   else{ s=c;}
}
else if(b>=c){
    l=b;
   if(a<=c){  s=a ;}
   else{ s=c;}
}
else{l=c;
    if(b<=a){  s=b ;}
   else{ s=a;}
}
 printf("The Largest Number is %d which is ",l);
 l%2==0? printf("Even.\n") :printf("Odd.\n");

 printf("The Smallest Number is %d which is ",s);
 s%2==0? printf("Even.") :printf("Odd.\n");
}
