#include <stdio.h>
int sum(int);
int main(){
    printf("The sum of first 50 natural number is %d",sum(50));
}
int sum(int n){
    if(n==1) return 1;
    else return n+sum(n-1);
}
