#include <stdio.h>

typedef struct company{
    char name[50];
    char address[50];
    char phone[20];
    int noOfEmployee;
} com;

int main(){
    com a;
    puts("Enter the name of company");
    gets(a.name);
    puts("Enter the address");
    gets(a.address);
    puts("Enter the phone number");
    gets(a.phone);
    puts("Enter the no. of employee");
    scanf(" %d",&a.noOfEmployee);
  printf("Name of company: %s \n Address: %s\n Contact: %s\n No. of Employees: %d",a.name,a.address,a.phone,a.noOfEmployee);
    return 0;
}
