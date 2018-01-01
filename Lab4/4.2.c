#include <stdio.h>

int main(){
    char a;
    printf("Enter an alphabet\n");
    scanf(" %c",&a);
	a=tolower(a);
    switch(a){
        case 'a':printf("Vowel");
                break;
        case 'e':printf("Vowel");
          break;
        case 'i' :printf("Vowel");
          break;
        case 'o':printf("Vowel");
          break;
        case 'u':printf("Vowel");
          break;
          default: printf("not vowel");

    }
    return 0;

}
