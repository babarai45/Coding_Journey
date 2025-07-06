// Q1: Write A programe to calculate avarage of three integer and 
// print the result and input values from user?


// _________Ans_01
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter number with space \n");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("Avarage of given interger is %d\n",(a+b+c)/3);
// }
// ____________________________________________________________

// Q2- Write a program to calculate the area of circumference of a circle
// and print the result and input values from user.

// _________Ans_02
#include<stdio.h>
int main(){
int r;
const float   PI = 3.14; 
printf("Enter Radius  of circle \n");
scanf("%d",&r);
float circumference = 2 * PI * r;
printf("Circumference of circle with radius %d is: %.2f\n", r, circumference);
    
}
