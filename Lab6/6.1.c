#include <stdio.h>

int add(int,int);
int sub(int,int);
int mult(int,int);
float div(int,int);
int main(){
    int a,b;
    printf("Input two integers");
    scanf(" %d %d",&a,&b);
    printf("a+b=%d\n",add(a,b));
    printf("a-b=%d\n",sub(a,b));
    printf("a*b=%d\n",mult(a,b));
    printf("a/b=%.2f\n",div(a,b));
    return 0;
}

int add(int a,int b){
    return a+b;
}
int sub(int a,int b ){
    return a-b;
}
int mult(int a,int b ){
    return a*b;
}
float div(int a,int b ){
    return (float)a/b;
}
