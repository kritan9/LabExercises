#include <stdio.h>
#include <conio.h>
int main(){
    char a[41];
    int i=0;
    FILE *f;
    f=fopen("stringc.txt","w+");
    if(f==NULL){
        printf("Error!");
        exit(1);
    }
    fputs("Writing String in a file using file handling functions in C",f);
    fgets(a,40,f);
    printf("%s",a);


    fclose(f);
    return 0;
}
