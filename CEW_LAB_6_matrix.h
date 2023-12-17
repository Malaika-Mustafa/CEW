#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void addMat(int arr1[][2], int arr2[][2], int rows, int cols,int arr3[][2]) {
    

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
 

void MulMat(int arr1[][2], int arr2[][2],int arr3[][2],int rows1,int rows2,int col1,int col2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < col2; j++) {
            for(int k=0;k<col1;k++){
                arr3[i][j]=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("Multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0;j < col1;j++) {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
void matTranspose(int arr[][2],int rows,int cols,int transmat[][2]){
      for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transmat[i][j]=arr[j][i];
        }
    }
     printf("Transposition:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transmat[i][j]);
        }
        printf("\n");
    }
}
int MatDeterminant(int matrix[][2]) {
    int a = matrix[0][0];
    int b = matrix[0][1];
    int c = matrix[1][0];
    int d = matrix[1][1];

    return (a * d) - (b * c);
}
