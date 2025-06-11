// Q1 write a program to print Hello Student on the screen
// #include <stdio.h>
// int main()
// {
//     printf("Hello Student\n");
//     return 0;
// }

// // Q2 write a program to print Hello on first line and Student on second line
// #include <stdio.h>
// int main()
// {
//     printf("Hello \nStudent");
//     // if we  add space after formater specifier it will show a
//     return 0;
// }

//
// // Q3  write a program to print "Muhammad Babar" as same in double quotes
// #include <stdio.h>
// int main()
// {
//     printf("\"Muhammad Babar\"\n");
//     printf("\'Muhammad Babar\'");
//     return 0;
// }\


// // Q4  write a program to print "\n" on screen
// #include <stdio.h>
// int main()
// {
//     printf("\\n\n");   // it will print \n
//     printf("\\r \n");    //it print\r
//     printf("\\ \t  babar \n");
//     return 0;
// }


// // Q5  write a program to print sum of two integers make sure take input from user
// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     printf("The sum is a and b is : %d",a+b);
//
//     return 0;
// }


// // Q6  write a program to calculate square of user entered number
//
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     printf("The Entered Number Square is : %d", a*a);
//     return 0;
// }


// // // Q7 write a program to print "Muhammad Babar" as same in double quotes
// //
// #include <stdio.h>
// int main()
// {
//     int l,w;
//     printf("Enter the length and width of rectangle: ");
//     scanf("%d %d",&l,&w);
//     printf("Area of rectangle: %d\n",l*w);
//
//     return 0;
// }

// // // Q 8 rite a program to print Your Name Age and your city using printf
// #include <stdio.h>
// int main()
// {
//     printf(""""
//              "Muhammad Babar\n My Age is 22\n"
//              "I live in Lahore Punjab Pakistan"
//              """");
//     return 0;
// }



// // Q9 Take two numbers and print them after swapping (without using 3rd variable — try logic later).
// #include <stdio.h>
// int main()
// {
//     int a=2,b=5;
//     printf("Before Swapping a is %d  and b is %d \n",a,b);
//     // so we use + - logic here
//     a= a+b;   // 7
//     b= a-b;
//     a= a-b;
//     printf("after swapping a is %d and  b is %d \n ", a,b);
//
//     return 0;
//
// }
//
//

// 10 Take a large float and print in scientific format using %e
// #include<stdio.h>
// int main()
// {
//     double a = 35000.0;
//     printf("in scientific %e \n",a);
//
//
//     return 0;
// }


// Q 11  Take user input and convert into decimal,octal,decimal
// # include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter A Number! ");
//     scanf("%d",&a);
//     printf("In Decimal %d \n",a);
//     printf("In HexaDecimal %x \n",a);
//     printf("In Octal %o \n",a);
// }

// Q 12  Take user input and show area of given input
//
#include <stdio.h>

int main(){
    int r;
    float a;
    printf("Enter area of radius \n");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of Given input is %f \n ",a);
    return 0;
}
