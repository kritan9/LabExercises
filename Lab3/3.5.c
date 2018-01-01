#include <stdio.h>
#include <conio.h>
int main()
{
	char c;
	c=getche();
	printf("\n");
	if (c>='A' && c<='Z' || c>='a' && c<='z')
		printf("alphabet");
	else if (c>='0' && c<='9')
		printf("Number");
	else
		printf("Special character");

	printf("\n************************************\n");
	printf("\nusing built in function");
	if (isalnum(c))
		printf("\nAlphanumeric");
	if (isblank(c))
		printf("\nBlank character");
	if (isalpha(c))
		printf("\nAlphabet");
	if (iscntrl(c))
		printf("\ncontrol character");
	if (isdigit(c))
		printf("\nDigit");
	if (isupper(c))
		printf("\nUppercase");
	if (islower(c))
		printf("\nLowercase");
	if (isxdigit(c))
		printf("\nHexadecimal");
	if (isgraph(c))
		printf("\nGraphical Character");
	return 0;
}
