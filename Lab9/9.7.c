#include <stdio.h>
typedef union family{
    char surname[50];
    int num;
    float salary;} fam;

enum week{sun,mon,tue,wed,thu,fri,sat};
int main(){
fam A;
printf("Enter surname,family number and salary\n");
scanf(" %s %d %f",A.surname,&A.num,&A.salary);
printf("family salary is %f\n",A.salary);
enum week today;
today=fri;
printf("Day %d",today+1);

}

