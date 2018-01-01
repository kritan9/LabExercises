#include <stdio.h>
int main(){
	float x=3.0, y=12.5,z=523.3,A=300.0,B=1200.5,C=5300.3;

	printf("X\ty\tz=%8.1f|%8.1f|%8.1f|\n",x,y,z);
	printf("A\tB\tC=%8.1f|%8.1f|%8.1f|\n",A,B,C);
    int i;
	for(i=0;i<60;i++){printf("-");};
	printf("\nX\ty\tz=  |%-8.2f|%-8.2f|%-8.2f\n",x,y,z);
	printf("A\tB\tC=  |%-8.2f|%-8.2f|%-8.2f\n",A,B,C);
	getch();
	return 0;
}
