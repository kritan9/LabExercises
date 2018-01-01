#include <stdio.h>
int main(){
	int x=6,y=3;
	printf("x\t|\ty\t|\texpression\t|\tresults\n");
	printf("%d\t|\t%d\t|\t%s\t\t|\tx=%d\n",x,y,"x=y+3",y+3);
	printf("%d\t|\t%d\t|\t%s\t\t|\tx=%d\n",x,y,"x=y-2",y-2);
	printf("%d\t|\t%d\t|\t%s\t\t|\tx=%d\n",x,y,"x=y*5",y*5);
	printf("%d\t|\t%d\t|\t%s\t\t|\tx=%d\n",x,y,"x=x/y",x/y);
	printf("%d\t|\t%d\t|\t%s\t\t|\tx=%d\n",x,y,"x=x%y",x%y);
	getch();
	return 0;


}
