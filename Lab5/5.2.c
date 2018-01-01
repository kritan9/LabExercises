#include <stdio.h>
#include <stdlib.h>


int main(){
    int a,b,x,y,z;

    printf("Input two positive integers \n");
    scanf(" %d %d",&a ,&b);
    x=a;y=b;
    /*(a>b)? (h=b) : (h=a);
    while(1){
        if(a%h==0 && b%h==0) break;
        h--;
    }*/
    while(x!=0){
        z=y%x;
        y=x; x=z;
    }
    printf("HCF= %d \nLCM= %d\n",y,a*b/y);
    return 0;
}

 /*You may use this as well for LCM
 (a>b)? (l=a) : (l=b);
     while(1){
        if(l%a==0 && l%b==0) break;
        l++;
    }*/
