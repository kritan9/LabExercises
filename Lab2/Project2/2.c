#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;
  printf("Enter three integers");
  scanf("%d %d %d",&a,&b,&c);
  printf("The integers in Forward order are: %d %d %d .",a,b,c);
  printf("The integers in Reverse order are: %d %d %d ",c,b,a);
  getch();
  return 0;
}
