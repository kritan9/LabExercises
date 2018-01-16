#include <stdio.h>

int main(){
   int mat1[3][2],mat2[3][2],i,j;
   printf("Enter the elements of mat1\n");
   for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("\nmat1[%d][%d]= ",i+1,j+1);
        scanf("%d",*(mat1+i)+j);
    }
   }
   printf("Enter the elements of mat2\n");
   for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("\nmat2[%d][%d]= ",i+1,j+1);
        scanf("%d",*(mat2+i)+j);
    }
   }
   printf("The elements of resultant sum matrix are: \n");
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("%d  ",mat1[i][j]+mat2[i][j]);

    }
    printf("\n");
   }

    return 0;
}
