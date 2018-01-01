#include <stdio.h>

int main(){
    int i,j,h=1;
    for(i=1;i<=18;i++){
            if(i==8) h=1;
        for(j=1;j<=h;j++){
            printf("\xfa"); //  printf("%c",\xfa);
        }
        printf("\n");
    h++;
    }

    getch();
    return 0;
}

