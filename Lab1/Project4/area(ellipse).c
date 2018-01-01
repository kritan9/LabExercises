#include <stdio.h>
//code to find area of ellipse
int main(){
	int a=6,b=4;// a and b are length of major and minor axes of the ellipse
	const float pi=3.1415;
	float area= pi*a*b; //formula for area of ellipse
	printf("The area of ellipse with major axis %d units and minor axis %d units is %.4f square units",a,b,area);//This prints the area of ellipse
	getch();//holds the screen
	return 0;//ends the main program
}
