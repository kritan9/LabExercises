#include <stdio.h>
#include <string.h>

void main(){
    char s[100];
    int m=0,n=0,i;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!=0;i++){// s[i]=='\0'
        if(s[i]==' ') m++;
        n++;
    }
printf("number of words=%d\nnumber of character=%d",m+1,n);
}
