#include <stdio.h>

int main(){
    float a[10];
    int i,j;
    printf("Enter 10 floating numbers");
    for(i=0;i<=9;i++)
{
    scanf(" %f",a+i);
}
 for(i=0;i<=9;i++)
{
  for(j=(i+1);j<=9;j++){
    if(a[i]>a[j]){
        a[i]=a[i]+a[j];
        a[j]=a[i]-a[j];
        a[i]=a[i]-a[j];
    }
  }
}
    printf("The largest and smallest numbers are %f and %f respectively",a[9],a[0]);
    return 0;
}
