#include <stdio.h>
#include <string.h>

void main(){
    char s[100];
    int m=0,i;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!=0;i++){// s[i]=='\0'  because integer value of '\0' is 0
       A:
       if(s[i]==' ')  m++;
        if(s[i+m]==0){
                s[i]=s[i+m];
                break;}
        s[i]=s[i+m];
        if(s[i]==' '){
            s[i+m]='a';
        goto A;}
    if(s[i]=='.') s[i]=':';

    }

printf("The edited string is: %s",s);
}
