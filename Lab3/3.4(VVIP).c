#include <stdio.h>
#include <conio.h>
int main()
{
	char c;
	char name[100];
	printf("Using getch():\n");
	printf("Enter a character:");
	c=getch();
	printf("\nDoesnt echo in screen. No Enter key. You entered \"%c\"\n",c);

	printf("\nUsing getche():\n");
	printf("Enter a character:");
	c=getche();
	printf("\nEchoes in screen. No Enter key. You entered \"%c\"\n",c);

	printf("\nUsing getchar():\n");
	printf("Enter a character:"); c=getchar();

	printf("\nEchos in screen. You entered \"%c\"\n",c);

    getchar();//or use while (getchar()!='\n'); or dont use any

	//--------------------------------------------------------------------------------------------------------------------------

	printf("\n\nscanf() and gets()");
	printf("\nEnter a single word(using scanf()):  ");
	scanf(" %s",name);
    while (getchar()!='\n'); //or use getchar();
	printf("%s\n",name);
	printf("\nIt takes a string without whitespaces. Requires Enter key to be pressed");

	printf("\n\nEnter multiple word(using gets()): ");
	gets(name);
	printf("\nYou entered: %s",name);
	printf("\nTakes string with whitespaces.");

	printf("\n\nDifferences between printf() and scanf()");

	printf("\nusing printf():%s","Hello World!  ");

	puts("Hello world!");
	printf("puts() adds a newline");

	return 0;
}
