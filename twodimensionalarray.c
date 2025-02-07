#include<stdio.h>
int main(){
   int row,col;
   printf("\nEnter row and coloum:");
    scanf("%d%d", &row ,&col);
   int matrix [row] [col];
   printf("\nEnter the elements:");
   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
       scanf("%d",&matrix[i][j]);
      }
    } 
    printf("The entered matrix is:\n");

    for (int i = 0; i < row; i++) {

        for (int j = 0; j < col; j++) {

            printf("%d ", matrix[i][j]);

        }

        printf("\n");

    }


    return 0;

}
