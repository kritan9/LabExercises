#include <stdio.h>

typedef struct company{
    char name[50];
    char address[50];
    char phone[20];
    int noOfEmployee;
} com;

void read(com *a){
    puts("Enter the name of company");
    gets((*a).name); // a->name
    puts("Enter the address");
    gets(a->address);
    puts("Enter the phone number");
    gets(a->phone);
    puts("Enter the no. of employee");
    scanf(" %d",&a->noOfEmployee);
}
void disp(com a){
      printf("Name of company: %s \n Address: %s\n Contact: %s\n No. of Employees: %d",a.name,a.address,a.phone,a.noOfEmployee);
}
int main(){
    com a;
    read(&a);
    disp(a);
    return 0;
}
