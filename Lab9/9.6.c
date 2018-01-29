#include <stdio.h>

typedef struct {
    char name[50],roll[15],address[50];
    int age;
    float average;
} student;
void read(student *a,int n){// struct a[]
    int i;
    for(i=0;i<n;i++){
          printf("For Student %d:\n",i+1);
    puts("Enter the name of student");
    gets((a+i)->name);  //a[i].name  because a[i]=*(a+i)
    puts("Enter the address");
    gets((a+i)->address);
    puts("Enter the roll number");
    gets((a+i)->roll);
    puts("Enter age");
    scanf(" %d",&(a+i)->age);
    puts("Enter average marks");
    scanf(" %f",&(a+i)->average);
    fflush(stdin);
}
}
void display(student a[],int n){
    int i;
    for(i=0;i<n;i++){
            printf("\n");
        printf("   Student %d:\n",i+1);
        printf("Name:%s\nAddress:%s\nRoll no.:%s\nAge:%d\nAverage mark:%f\n",a[i].name,a[i].address,a[i].roll,a[i].age,a[i].average);
         printf("\n");
    }
}
int main(){
   student a[12];
   read(a,12);
   display(a,12);
    return 0;
}
