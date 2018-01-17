#include <stdio.h>
#include <string.h>

void main(){
    char word[5][15];
    char p[15];
    int i,j;
    printf("enter 5 words ");
    for(i=0;i<5;i++){
    scanf(" %s",word+i);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){

            if(strcmp(word+i,word+j)>0){

               strcpy(p,word+i);
                strcpy(word+i,word+j);
                 strcpy(word+j,p);

            }
        }
    }
    printf("the words sorted alphabetically are:\n");
    for(i=0;i<5;i++){
    printf(" %s ",word+i);
    }
}
