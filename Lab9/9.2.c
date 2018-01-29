#include <stdio.h>
#include <math.h>

int main(){
    float x[2],y[2];
    puts("Enter the coordinates of first point");
    scanf(" %f%f",x,y);
    puts("Enter the coordinates of second point");
    scanf(" %f%f",x+1,y+1);
    printf("The distance betn them is: %f",pow(pow(x[0]-x[1],2)+pow(y[0]-y[1],2),0.5));
}
