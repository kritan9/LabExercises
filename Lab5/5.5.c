#include <stdio.h>
#include <math.h>

int main(){
    int i,j,c;
    for(i=0;i<4;i++){
        for(j=0;j<=16;j++){
            if(j==(4-i) || j==(5+i) || j==(12-i) || j==(13+i)) printf("*");
            else printf("  ");
        }
        printf("\n");
    }

printf("\n");printf("\n");

   for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            printf("*  ");
        }
        printf("\n");
   }
   printf("\n");printf("\n");
   for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d  ",j*j);
        }
        printf("\n");
   }
   printf("\n");printf("\n");
   for(i=1;i<=5;i++){
        c=i;
        for(j=5;j>=i;j--){
            printf("%d  ",c);
            c=c+j;
        }
        printf("\n");
   }
   printf("\n");printf("\n");

    getch();
    return 0;
}

