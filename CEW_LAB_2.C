//__________________________LAB-2_____________________________________
//---------------------EXERCISES----------------------------------------
// --------------------Q1----------------
//using for loop:
// #include <stdio.h>
// int main() {
    // int n;
    // printf("Type a number: ");
    // scanf("%d",&n);
    // int sum=0;
    // for(int i=0; i<=n;i++){
    //     printf("%d",i);
    //     sum+=i;
    // }
    // printf("\nThe sum of n natural number is:%d",sum);
// return 0;
// }

//using while loop:
// int main() {
    // int n;
    //int i=0;
    // printf("Type a number: ");
    // scanf("%d",&n);
    // int sum=0;
    // while( i<=n){
    //     printf("%d",i);
    //     sum+=i;
    //i++;
    // }
    // printf("\nThe sum of n natural number is:%d",sum);
// return 0;
// }

//using do while loop:
// int main() {
    // int n;
    //int i=0;
    // printf("Type a number: ");
    // scanf("%d",&n);
    // int sum=0;
    // do{
    //     printf("%d",i);
    //     sum+=i;
    //i++;
    // }
    //while( i<=n);
    // printf("\nThe sum of n natural number is:%d",sum);
// return 0;
// }

//-----------------------Q2------------------

// #include <stdio.h>

// int main() {
//     int rows, i, j, space;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }

//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }

//---------------------Q3----------------

// #include <stdio.h>
// int main(){
//     char str1[10], str2[10];
//     int i, response=0;
//     printf("Enter first string: ");
//     scanf("%s", str1);
//     printf("Enter second string: ");
//     scanf("%s", str2);
//     for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
//         if(str1[i] != str2[i]) { response = 1;}}
//     if(response ==0 && str1[i]=='\0' && str2[i]=='\0'){printf("The Strings are equal.");}
//         else{printf("The Strings are unequal.");}
//     return 0;
// }


//---------------------Q4----------------------

// #include<string.h> 
// int main() 
// { 
//     char str[100]; 
//     int i; 
//     printf("Enter the sentence: "); 
//     gets(str) ;
//     for(i=0;i<strlen(str);i++) 
//     { 
//         if(str[i]>=65 && str[i]<=90) 
//             str[i]=str[i]+32; 
//         else if(str[i]>=97 && str[i]<=122) 
//             str[i]=str[i]-32; 
//     } 
//     printf("New sentence: %s",str); 
//     return 0; 
// }

//---------------------Q5----------------------

// #include <stdio.h>

// int main() {
//     int arr[8]={1,2,2,3,4,1,5,5};

    
//      int i , j;
//     printf("Unique elements in the array are: ");
//     for (i = 0; i < 8; i++) {
//         int count = 0;
//         for (j = 0; j < 8; j++) {
//             if (arr[i] == arr[j] && i != j) {
//                 count++;
//                 break;
//             }
//         }
//         if (count == 0) {
//             printf("%d ", arr[i]);
//         }
//     }

//     return 0;
//  }
//---------------------Q6----------------------
//#include<stdio.h>
// struct Distance
// {
//     int feet;
//     int inch;
// } d1, d2, result;

// int main()
// {
//     printf("Enter first distance in feet and inch:\n");
//     scanf("%d %d", &d1.feet, &d1.inch);
//     printf("Enter second distance in feet and inch:\n");
//     scanf("%d %d", &d2.feet, &d2.inch);

//     // Add distances
//     result.feet = d1.feet + d2.feet;
//     result.inch = d1.inch + d2.inch;

//     // If inch is greater than or equal to 12, convert it to feet
//     if(result.inch >= 12)
//     {
//         result.feet += result.inch/12;
//         result.inch = result.inch%12;
//     }
//     printf("Total distance is %d feet %d inch.", result.feet, result.inch);

//     return 0;
// }
