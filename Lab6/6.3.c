#include <stdio.h>

int fact(int n){
    if(n==0) return 1;
    else return n*fact(n-1);
}
int P(int n,int r){
    return fact(n)/fact(n-r);
}
int C(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n,r;
    printf("Input n and r");
    scanf(" %d %d",&n,&r);
    if(n<r){
        n+=r;
        r=n-r;
        n=n-r;
    }
    printf(" C(%d,%d)= %d and P(%d,%d)=%d ",n,r,C(n,r),n,r,P(n,r));
}
