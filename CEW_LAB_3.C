//__________________________LAB-3_____________________________________
//---------------------EXERCISES----------------------------------------
// --------------------Q1----------------
// #include<stdio.h>
// void swap(int*ptr_1, int*ptr_2);
// int main() {
//     int num1,num2;
//     printf("Type a number_1: ");
//     scanf("%d",&num1);
//     printf("Type number_2: ");
//     scanf("%d",&num2);
//     swap(&num1, &num2);
//     printf("\nThe numbers are swapped!!!\n");
//     printf("Now, number_1: %d\n",num1);
//     printf("Now, number_2: %d\n",num2);
// return 0;
// }
// void swap(int*ptr_1, int*ptr_2){
//     int t=*ptr_1;
//     *ptr_1=*ptr_2;
//     *ptr_2=t;
// }



//-----------------------Q2------------------
// void reverse(char *str);
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str_[70];

//     printf("Enter the sentence: ");
//fgets(str_,70,stdin);

//reverse(str_); 
//printf("\nThe resultant sentence is: %s",str_); 
//return 0;  
//         
//     }
// void reverse(char *str_){
//     int length= strlen(str_);
//     for(int i=0;i<(length/2);i++){
//         char res=str_[i];
//         str_[i]=str_[(length-1)-i-1];
//         str_[(length-1)-i-1]=res;
//     }
// }


//---------------------Q3----------------

// #include <stdio.h>
// int main(){
//     int num,i;
  
//     printf("Enter the number of elements of array: ");
//     scanf("%d", &num);
// int array[num];
// int *ptr=&array[0];
//     for(i = 0; i<num; i++) {
//        printf("Enter the elements of your array:");
// scanf("%d",(ptr+i));}
//     for(i = 0; i<num; i++) {
//        printf("the element at index %d is: %d\n",i,*(ptr+i));
//     }
// scanf("%d",(ptr+i));
//     return 0;
// }
    


//---------------------Q4----------------------

// #include<stdio.h> 
// int main() 
// { 
//     int array[]={0,1,3,5,7,9,6,8,2,11};
// int to_find=9;
// int *ptr=&array[0];
// for(int i=0;i<9;i++){
//     if(*(ptr)==to_find){
//         printf("Element found!!! %d",*(ptr));
//         return *ptr;
//     }
//     else{
//         ptr++;
//     }

// } 
//     return 0; 
// }

//---------------------Q5----------------------

// #include <stdio.h>
// void Add_matrix(int *array1, int *array2, int *array3, int rows, int col);
// void Print_matrix(int *array3, int rows, int col);
// int main() {
//     int array1[3][2] = {{3, 3}, {1, 2}, {7, 8}};
//     int array2[3][2] = {{3, 3}, {1, 2}, {7, 8}};
//     int array3[3][2];
//     int rows = 3;
//     int col = 2;
//     Add_matrix(&array1[0][0], &array2[0][0], &array3[0][0], rows, col);
//     Print_matrix(&array3[0][0], rows, col);
//     return 0;
// }
// void Add_matrix(int *array1, int *array2, int *array3, int rows, int col) {
//     int i, j;
//     for (i = 0; i < rows; i++) {
//         for (j = 0; j < col; j++) {
//             *(array3 + i * col + j) = *(array1 + i * col + j) + *(array2 + i * col + j);
//         }
//     }
// }
// void Print_matrix(int *array3, int rows, int col) {
//     int i, j;
//     for (i = 0; i < rows; i++) {
//         for (j = 0; j < col; j++) {
//             printf("%d ", *(array3 + i * col + j));
//         }
//         printf("\n");
//     }
// }