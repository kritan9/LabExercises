#include <stdio.h>

void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main(){
  int a, b;

  printf("Enter two numbers\na= ");
  scanf(" %d",&a);
   printf("b= ");
  scanf(" %d",&b);
  swap(&a,&b);
  printf("a= %d and b= %d after swapping",a,b);
  A:
    return 0;
}
