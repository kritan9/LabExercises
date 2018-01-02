#include <stdio.h>

void Fibonacci(int a,int b,int n){
    if(a<n){
    printf(" %d ",a);
    b=a+b; a=b-a;
    Fibonacci(a,b,n);
    }
}
int main(){
    int n;
    printf("enter the ending number");
    scanf("%d",&n);
    Fibonacci(0,1,n);
}
