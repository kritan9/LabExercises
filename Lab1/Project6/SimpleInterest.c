#include <stdio.h>
//program to calculate simple interest
int main(){
	int P,T;
	float R,I;
	P=4000;
	T=2;
	R=5.5;
	I=P*T*R/100;
	printf("Simple Interest of Rs%d in time %d years @ %.1f  per annum is Rs%.2f",P,T,R,I);
	getch();
	return 0;

}
