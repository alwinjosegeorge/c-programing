#include<stdio.h>
int main(){
   int row,col;
   printf("\nEnter row and coloum:");
    scanf("%d%d", &row ,&col);
   int matrix1[row][col];
   printf("\nEnter the first matrix:");
   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
       scanf("%d",&matrix1[i][j]);
      }
    } 
     int matrix2[row][col];
    printf("\nEnter the Second matrix:");
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
         scanf("%d",&matrix2[i][j]);
       }
     }
      int matrix3[row][col];
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
         }
     }
      for (int i = 0; i < row; i++) {

        for (int j = 0; j < col; j++) {

            printf("%d ", matrix3[i][j]);

        }

        printf("\n");

    }


     
      return 0;
}

