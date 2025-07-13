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

#include<stdio.h>
int main(){
   int a=10,b=20;
   printf("Befor swaping value a is %d and b is %d \n",a,b);
   a=a*b,b=a/b,a=a/b;  // bys L-> R association rules 
   printf("After swaping value a is %d and b is %d \n",a,b);

}