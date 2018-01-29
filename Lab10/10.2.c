#include <stdio.h>
#include <conio.h>
int main(){
    char a;
    int i=0;
    FILE *f;
    f=fopen("filec.txt","r");
    if(f==NULL){
        printf("Error!");
        exit(1);
    }
    while((a=fgetc(f))!=EOF){
    i++;
     printf("%c",a);

    }
    /*or
        while(!feof(f)){
    printf("%c",fgetc(f));
     i++;}*/
    printf("\nno.of characters=%d",i);

    fclose(f);
    return 0;
}
