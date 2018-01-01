#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter two Numbers\n");
    scanf(" %d %d",&a,&b);
   if(a>b){
    c=b; b=a; a=c;
   }
   c=0;
   while(a<(b-1)){
        a++;
        if(a%2==0) c+=a;
   }
   printf("The sum of even numbers betn them is %d",c);
    getch();
    return 0;
}

