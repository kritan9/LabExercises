#include <stdio.h>
#include <conio.h>

typedef struct company{
    char name[50];
    char address[50];

} com;
com read(com x)   //or struct company read(com x)
{
    puts("Enter the name of company");
    gets(x.name);
    puts("Enter the address");
    gets(x.address);
    return x;
}
int main(){
    com a;
    a=read(a);
  printf("Name of company: %s \n Address: %s",a.name,a.address);
    return 0;
}
