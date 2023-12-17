#include<stdio.h>
#include"matrix.h"

int main() {
    int arr1[][2] = {{1, 2}, {3, 2}};
    int arr2[][2] = {{1, 7}, {9, 4}};
    int rows1=sizeof(arr1)/sizeof(arr1[0]);
    int col1=sizeof(arr1[0])/sizeof(arr1[0][0]);
    int arr3[rows1][col1];
    addMat(arr1, arr2, rows1, col1,arr3);
    int rows2=sizeof(arr2)/sizeof(arr2[0]);
    int col2=sizeof(arr2[0])/sizeof(arr2[0][0]);
    int arr4[rows1][col2];
    if(col1==rows2){ 
       MulMat(arr1,arr2,arr4,rows1,rows2,col1,col2);
    }else{
        printf("Invalid order for multiplication.");
    }
    int mattrans[rows1][col1];
    matTranspose(arr1,rows1,col1,mattrans);
    int matrix[][2] = {{5, 2}, {3, 0}};

    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int determinant = MatDeterminant(matrix);
    printf("Determinant: %d\n", determinant);
    return 0;
}


    
