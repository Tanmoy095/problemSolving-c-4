//Write a C program to find the transpose of a matrix. 
//3.Write a C program to find the transpose of a matrix. 


#include <stdio.h>
int main(){

int A[10][10],transpose[10][10],i,j,row,col;

printf("enter number of rows and column : ");
  scanf("%d %d", &row, &col);

//matrix
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("A [%d] [%d] = " ,i,j);
        scanf("%d" ,&A[i][j]);
    };
    printf("\n");
}
//entered matrix
 printf("Entered matrix: \n");
  for (int i= 0; i<row;i++){
  for (int j=0; j<col;j++) {
    printf("%d ", A[i][j]);
  }
      printf("\n");

  }


  //transpose matrix

  for(int i=0;i<row;i++){

  for(int j=0;j<col;j++) {

    transpose[j][i]= A[i][j];

  }
  }

  // printing the transpose
  printf("\Transpose of the matrix:\n");
  for(int i=0; i<col;i++){
  for (int j =0;j<row;j++) {
    printf("%d  ", transpose[i][j]);
  }
      printf("\n");
}
  }
