#include <stdio.h>
#include <string.h>

void main(){
  char a[]="UNIVERSITY";
  int i,j,k=0;
  for(i=0;i<9;i++){
        i<5? k++: k--;
for(j=0;j<2*k;j++){
    printf("%c",a[j]);
}
printf("\n");
  }
}
