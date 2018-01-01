#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
    float a,b,c;
  printf("input the value of constants a, b and c for the equation ax^2+bx+c=0\n");
  scanf(" %d %d %d",&a,&b,&c);
  if((b*b-4*a*c)<0)
    printf("The roots of the equation are: a) %.4f + %.4f i b) %.4f - %.4f i ",-b/(2*a),sqrt(4*a*c-b*b)/(2*a),-b/(2*a), sqrt(4*a*c-b*b)/(2*a));
  else if((b*b-4*a*c)>0)
    printf("The roots of the equation are: a) %.4f  b) %.4f ",-b/(2*a)+sqrt(-(4*a*c-b*b))/(2*a),-b/(2*a)-sqrt(-(4*a*c-b*b))/(2*a));
  else
    printf("The two roots are equal which is %.4f",-b/(2*a));
	getch();
    return 0;

}
