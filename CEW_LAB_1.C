//__________________________LAB-1_____________________________________
//---------------------EXERCISES----------------------------------------
// --------------------Q1----------------
// #include <stdio.h>
// int main() {

// int employeeId;
// float hoursWorked;
// float salaryPerHour;
// printf("Enter your Employee ID: \n"); scanf("%d",&employeeId);
// printf("Enter total hours worked in a month: \n"); scanf("%f",&hoursWorked);
// printf("Enter salary per hour: \n"); scanf("%f",&salaryPerHour);
// printf("employee ID :%d",employeeId);
// printf("salary per month:Rs.%.2f",hoursWorked*salaryPerHour);
// return 0;
// }

//-----------------------Q2------------------

// #include <stdio.h>
// int main() {
// float height;
// float width;
// printf("Enter the height of the rectangle: \n"); scanf("%f",&height);
// printf("Enter width of the rectangle: \n"); scanf("%f",&width);

// printf("Perimeter of rectangle is :%.2f",2*(height+width));
// printf("Area of rectangle is: %.2f",height*width);
// return 0;
// }

//---------------------Q3----------------

// #include <stdio.h>
// int main() {
// int height;printf("Enter your height in centimeters : \n"); scanf("%d",&height);
// if (height<150){
//     printf("Dwarf");
// }else if (height==150){
//     printf("Average");
// }else if (height>=165){
//     printf("Tall");
// }
// return 0;
// }

//---------------------Q4----------------------

// #include <stdio.h>
// void decimalToBinary(int num){
//     if(num>0){
//         decimalToBinary(num/2);
//         printf("%d",num%2);
//     }
// }
// int main() {
// int decimalNo;
// printf("enter any decimal number:");scanf("%d",&decimalNo);
// printf("Binary Representation:");
// decimalToBinary(decimalNo);
// return 0;
// }

//------------------Q5---------------------

// #include <stdio.h>
// void Fibonacci(int num){
//     int count=0;
//     int n1=0;
//     int n2=1;
//     while(count<num){
//     printf("%d ",n1);
//     int nth = n1 + n2;
//     n1 = n2;
//     n2 = nth;
//     count+=1;
        
//     }
// }
// int main() {
// int fab;
// printf("enter a number:");
// scanf("%d",&fab);
// if (fab==0){
// printf("Fibonacci series doesn't exist");
// }
// else {
// Fibonacci(fab);
// }
// return 0;
// }

//-----------------------------------CLASS-WORK--------------------------------------

//----------------Q1-------------------

// #include <stdio.h>
// int main() { 
// int myNum;
// printf("Type a number: \n");
// scanf("%d", &myNum);
// if (myNum%2==0){
//     printf("number is even");
// } else{
//     printf("number is odd");
// }
// return 0;
// }

//----------------Q2----------------------
// #include <stdio.h>
// int main() {
//  int myNum1;
// printf("Type a number1: \n");
// scanf("%d", &myNum1);
// int myNum2;
// printf("Type a number2: \n");
// scanf("%d", &myNum2);
// if(myNum1>5 && myNum2>5){
//     printf("%d",myNum1+myNum2);
// }else if(myNum1>5 || myNum2>5){
//     printf("%d",myNum1*myNum2);
// }else if(myNum1<5 && myNum2<5){
//     printf("%d",myNum1+myNum2+1);
// }else{
//     printf("hello world");
// }   
// return 0;
// }

//----------------Q3--------------------


// void myfunc(int num) {
// if (num>0){
//     printf("%d x 1 = %d\n",num,num*1);
//     printf("%d x 2 = %d\n",num,num*2);
//     printf("%d x 3 = %d\n",num,num*3);
//     printf("%d x 4 = %d\n",num,num*4);
//     printf("%d x 5 = %d\n",num,num*5);
//     printf("%d x 6 = %d\n",num,num*6);
//     printf("%d x 7 = %d\n",num,num*7);
//     printf("%d x 8 = %d\n",num,num*8);
//     printf("%d x 9 = %d\n",num,num*9);
//     printf("%d x 10 = %d\n",num,num*10);
// } else {
//     printf("number is negetive\n");
// }    
// }
// int main() {

// int num;
// printf("type a number: \n"); scanf("%d",&num);
// myfunc(num);
//  return 0;
// }