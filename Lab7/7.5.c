#include <stdio.h>
void multiply(int **a,int **b,int **c);
int main(){
   int mat1[3][3],mat2[3][3],mat3[3][3],temp,i,j,k;
   printf("%d",sizeof(mat1));
   printf("Enter the elements of mat1\n");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("\nmat1[%d][%d]= ",i+1,j+1);
        scanf("%d",*(mat1+i)+j);
    }
   }
   printf("Enter the elements of mat2\n");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("\nmat2[%d][%d]= ",i+1,j+1);
        scanf("%d",*(mat2+i)+j);
    }
   }
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        temp=0;
        for(k=0;k<3;k++){
                temp+=mat1[i][k]*mat2[k][j];
        }
        mat3[i][j]=temp;
    }
 }
 printf("the elements of resultant product matrix:\n");
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d  ",mat3[i][j]);

    }
    printf("\n");
   }
    return 0;
}

