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
/*
or you can make int Fibb(int n){                      n represents nth term
		if(n==1) return 0;
		if(n==2) return 1;
		else return Fibb(n-1) + Fibb(n-2);
		*/