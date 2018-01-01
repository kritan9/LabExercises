#include <stdio.h>
#include <math.h>

int main()
{
  int P=4000,T=2;
  float R=5.5,Si,Ci;
  Si=P*T*R/100;
  Ci=P*pow((1+R/100),T)-P;
  printf("The Simple interest is %.2f\n",Si);
    printf("The Compound interest is %.2f\n",Ci);
    getch();
	return 0;
	
}
