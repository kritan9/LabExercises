#include <stdio.h>
//code to find area of circle
int main(){
	int r=5; //the radius of circle is 5
	const float pi=3.1415;
	float area= pi*r*r;//formula of area of circle
	printf("The area of circle with radius %d units is %.2f square units",r,area);//This prints the area of circle
	getch();//holds the screen
	return 0;//ends the main program
}
