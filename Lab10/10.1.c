#include <stdio.h>
#include <conio.h>
int main(){
    char a;
    FILE *f;
    f=fopen("filec.txt","w");
    if(f==NULL){
        printf("Error!");
        exit(1);
    }
    while((a=getchar())!='\n'){

       fputc(a,f);

    }

    fclose(f);
    return 0;
}
