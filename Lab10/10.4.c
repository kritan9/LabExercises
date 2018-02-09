#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
  
  FILE *f;
  char name[40];
  int age,height;
  f=fopen("person.txt","w+");
  if(f==NULL){  //f==0
  	exit(1);
  
  }
printf("Enter name age and height of person\n");
scanf("%[^\n]%d%d",name,&age,&height);

fprintf(f,"Name %s\nAge %d\nHeight%d",name,age,height);
fseek(f,5,0);
fscanf(f,"%[^\n]%d%d",name,&age,&height);

printf("The contents read from file are: \n");

printf("Name: %s\nAge%d\nHeight:%d",name,age,height);
    fclose(f);
    getch();
    return 0;
}
