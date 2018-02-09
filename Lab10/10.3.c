#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
  
  FILE *f;
  char str[40];
  f=fopen("stringc.txt","w+");
  if(f==NULL){  //f==0
  	exit(1);
  
  }
printf("Enter the strings\n");
while(strlen(gets(str))!=0){
	fputs(str,f);
	fputs("\n",f);
	
}
rewind(f); //fseek(f,0,0) or fseek(f,0,SEEK_SET)
printf("The contents stores in file are: \n");
while(fgets(str,39,f)!=NULL){
	printf("%s",str);
}
    fclose(f);
    getch();
    return 0;
}
