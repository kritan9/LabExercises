#include <stdio.h>
#define mult(a,b) a*b
#define sum(a,b) (a+b)
#define sub(a,b) (a-b)
#define div(a,b) a/b
#define PI 3.1415
int main(){
	int a=8,b=4;
	float c;
	printf("PI*mult(a,b)=%.4f",c=PI*mult(a,b));
	printf("\nPI*sum(a,b)=%.4f",c=PI*sum(a,b));
	printf("\nPI*sub(a,b)=%.4f",c=PI*sub(a,b));
	printf("\nPI*div(a,b)=%.4f",c=PI*div(a,b));
	getch();
	return 0;
}
