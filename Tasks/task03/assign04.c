// Q1:write a program to calcalute 
// size of character costant in C?

// Ans_01 ✅
// #include<stdio.h>
// int main(){
//     int ch;
//     printf("Enter chacter:\n ");
//     scanf("%d",&ch);
//     printf("size of chacter of given %c is %d\n",ch,sizeof(ch));  
//     printf("size of chacter of given %c is %lu",ch,sizeof(ch));  // recomended unsigne log =ul 
// }



// Q2:write a program to calcalute size of real constant in C?

// Ans_02 ✅

// #include<stdio.h>
// int main(){
//     double real_constant ;
//     printf("Enter chacter:\n ");
//     scanf("%lf",&real_constant);
//     printf("size of chacter of given %lf is %d ",real_constant,sizeof(real_constant));
// }


// Q3:write a program with one char type variavle assigned with 'A' and 
// change it to  value 'B' and print it uinsing increment operator?


// // Ans_03 ✅

// #include<stdio.h>
// int main(){

    // logic 01
    //  char ch1;   // char ch1,ch2;   
    //  printf("Enter Chacter :");
    //  scanf("%c",&ch1);
    //  printf("Befor increament character is %c and its ASCCI value is: %d\n",ch1,ch1);
    // //  ch2 = ++ch1;   
    //  ch1++;
    //  printf("After increament character is %c and its ASCCI value is: %d\n ",ch1,ch1);
     

     // // logic   02
    //  char ch1;
    //  int x;
    //  printf("Enter Chacter :");
    //  scanf("%c",&ch1);
    //  printf("Befor increament character is %c and its ASCCI value is: %d\n",ch1,ch1);
    //  x = ("%d",ch1); // store its assci value 
    //  x = ++x; // incremnet
    //  printf("After increament character is %c and its ASCCI value is: %d \n ",x,x);
     
   
// }

 


// Q4:write a program to swap two integer variables using third variable?

// Ans_04 ✅

// #include<stdio.h>
// int main(){
//    int a=5,b=10,c;
//    printf("Befor swaping value a is %d and b is %d \n",a,b);
//    c=b;
//    b=a;
//    a=c;
//    printf("After swaping value a is %d and b is %d \n",a,b);

// }

// Q5:write a program to swap two integer variables without using third variable?

// Ans_05 ✅

// #include<stdio.h>
// int main(){
//    int a=5,b=10;
//    printf("Befor swaping value a is %d and b is %d \n",a,b);
//    // now we use +,- opertaion 
//    a=a+b //  5+10 =15
//    b=a-b   // 15-10 = 5 now b is 5
//    a = a-b  // 15-5 =10  now a is 10

//    printf("After swaping value a is %d and b is %d \n",a,b);

// }



// Q6:write a program to swap two integer variables without using third variable  and without +,- opetrtions ?

// Ans_06 ✅

// #include<stdio.h>
// int main(){
//    int a=5,b=10;
//    printf("Befor swaping value a is %d and b is %d \n",a,b);
//    // now we use +,- opertaion 
//    a=a*b; //  5*10 =50
//    b=a/b;   // 50/10 = 5 now b is 5
//    a = a/b; // 50/5 =10  now a is 10

//    printf("After swaping value a is %d and b is %d \n",a,b);

// }




// Q7:write a program to swap two integer variables without using third variable  and without arthmatic  opetrtions ?

// Ans_06 ✅

// #include<stdio.h>
// int main(){
//    int a=5,b=10;
//    printf("Befor swaping value a is %d and b is %d \n",a,b);
//    // now we use +,- opertaion 
//    a=a^b; //  5*10 =50
//    b=a^b;   // 50/10 = 5 now b is 5
//    a = a^b; // 50/5 =10  now a is 10

//    printf("After swaping value a is %d and b is %d \n",a,b);

// }



// Q8:write a program to swap two integer variables using without  third variable in single line arithmatic expression?

// Ans_08 ✅

// #include<stdio.h>
// int main(){
//    int a=10,b=20;
//    printf("Befor swaping value a is %d and b is %d \n",a,b);
//    a=a*b,b=a/b,a=a/b;  // bys L-> R association rules  // logic one
//    a = a+b - (b=a)  // here a original value assigne to a and after a+b = 30 and then a-b(30-10=20) so a=20 and swap it 
//    30 = 10+20 - b(10) 

//    printf("After swaping value a is %d and b is %d \n",a,b);

// }


// Q9:write a program to input three digits and print sum of its  three digits?

// Ans_09 ✅

// #include<stdio.h>
// int main(){
//    int x;
   
//     printf("Enter three digits:\n");
//     scanf("%d",&x);
//     // logic using / and % 
//     // x = 123 
//     // d1 = 123/100 = 1 and store as intere that is skip after point values
//     // d1 = 123/10 = 12 as intereger the 12%10 and get last digit 2 
//     // d3 = 123%10 and get 3 last 
//     // sum of d1+d2+d3 
//     printf("sum of three digits is %d",x/100+x/10%10+x%10);
// }


// Q10:write a program to find ASCCII  code of a character '+'?

// Ans_10 ✅

// #include<stdio.h>
// int main(){
//    char ch;
//     printf("Enter three charcater:\n");
//     scanf("%c",&ch);
//     printf("ASCCI code of Given Chrater %c is  %d",ch,ch);
// }


// Q11:write a program to print the size of an int, 
// a float, double and char data types variables in C? 

// Ans_11 ✅

// #include<stdio.h>
// int main(){
//    int x;
//    float y;
//    char ch;
//    double dl;
//     printf("interger varaible type take size %d:\n",sizeof(x));
//     printf("float varaible type take size %d:\n",sizeof(y));
//     printf("character varaible type take size %d:\n",sizeof(ch));
//     printf("doubel  varaible type take size %d:\n",sizeof(dl));

// }


// Q12:write a program to print to make last digit of a number stored in a variable as zero?
// ```c
// # Example 
// if the number is 1234 then it should be 1230




// Ans_12 ✅

// #include<stdio.h>
// int main(){
//    int x;
//    printf("Enter max numbers:");
//    scanf("%d",&x);
// logic   
// x = 123   123/10 = 12 
// 12 * 10 + 120 
//     printf("number with last digit replaced by 0 %d",x/10*10);

// }



// #Q13:write a program to take a number from user and also digit and apend that digit at the end of the number and print it.
// ```c
// Example
// # If the number is 1234 and digit is 5, then it should be 12345


// Ans_12 ✅

#include<stdio.h>
int main(){
   int num ,digit;
   printf("Enter Number and digit :");
   scanf("%d %d",&num,&digit);
// logic   
//  num * 10 = 123*10  1230
// num+digit 1230+2 1232 
    printf("after apend digit at the end is  %d",num*10+digit);

}