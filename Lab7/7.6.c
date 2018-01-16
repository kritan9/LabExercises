#include <stdio.h>

int main(){
   char lol[100];
   int i,m;
   printf("enter the word\n");
   scanf("%s",lol);
   for(i=0;i<100;i++){
    if(lol[i]=='\0'){
            m=i;
            break;}
   }
   for(i=0;i<(m%2==0? m/2 : (m-1)/2);i++){
        if(lol[i]!=lol[m-1-i]){
            goto A;
        }
   }
   printf("palindrome");
   goto B;
    A:
        printf("not palindrome");
    B:
    return 0;
}
