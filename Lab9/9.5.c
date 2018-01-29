#include <stdio.h>

typedef struct {
    float r,i;
} complex;
void read(complex *a){
    puts("Enter the real and imaginary part of complex num");
    scanf(" %f %f",&a->r,&a->i);
}
complex add(complex a,complex b){
    complex c;
    c.r=a.r+b.r;
    c.i=a.i+b.i;
    return c;
}
complex sub(complex a,complex b){
    complex c;
    c.r=a.r-b.r;
    c.i=a.i-b.i;
    return c;
}
int main(){
    complex a,b,c,d;
   read(&a); read(&b);
   c=add(a,b); d=sub(a,b);
  printf("Sum = %f%c%fi\nDifference= %f%c%fi",c.r,c.i>0? '+' : ' ',c.i,d.r,d.i>0? '+' : ' ',d.i);
    return 0;
}
