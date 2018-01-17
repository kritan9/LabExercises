#include <stdio.h>

int main(){
    int *a,i=0,l,s;
    a=(int *)malloc(3*sizeof(int)); printf("Input 3 numbers");
    for(i=0;i<3;i++){
       scanf(" %d",a+i);
    }
    l=s=*a;
    for(i=0;i<3;i++){
        if(l<*(a+i)) l=*(a+i);
         if(s>*(a+i)) s=*(a+i);
    }
   free(a);
   printf("The largest and smallest numbers are:%d and %d",l,s);

    return 0;
}
