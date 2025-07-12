// Q1-Write A program to input character from user and prints its ASSCI code;

// Ans_01
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter Character: ");
//     scanf("%c",&ch);
//     printf("Your Entered character %c is %d \n",ch,ch );
//     return 0;
// }

// Q2- Write a program to input a ASSCI from user and print character

// Ans_02


// #include<stdio.h>
// int main(){
//     int assci;
//     printf("Entere Assci code: ");
//     scanf("%d",&assci);
//     printf("The Entered Assci code chactere %d is %c",assci,assci);
//     return 0;
// }

//Q3- write a program to three input character from user and print their ASCII code with character crosspondingly;

// Ans_03


// #include<stdio.h>
// int main(){
//     char ch1,ch2,ch3;
//     printf("Enter three character with space!:");
//     scanf(" %c %c %c", &ch1, &ch2, &ch3);
//     printf("your Entered\n");
//     printf("%c -> ASCII: %d \n",ch1,ch1);
//     printf("%c -> ASCII: %d \n",ch2,ch2);
//     printf("%c -> ASCII: %d \n",ch3,ch3);
//     return 0;
// }



// Q4- Write a program to print the last digit of a number entered by user;

// Ans_04


// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter Number:");
//     scanf(" %d", &num);
//     printf(" The Last digits of Entered Numbers %d \n",num % 10);
//     return 0;

// }




// Ans_05


// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter Number:");
//     scanf(" %d", &num);
//     //removing last digits 
//     num=num/10;
//     printf(" The Last digits of Entered Numbers %d \n",num);
//     return 0;
     
// }



// experi
// #include<stdio.h>
// int main(){
//     char a,b,c;
//     printf("Enter Number:");
//     scanf("%c%c%c",&a,&b,&c);
//     printf("%c %c %c",a,b,c);
//     return 0;
     
// }

/* NOTE: 

this above code problem only appear when we take char values ,{int and float} is not 
show this type of problem so 

how to resolve it becuse it take new line as checter 
space as chracte and tab as charecter




solution 
scanf with sapce (it consider tab/enter/newline as space ) it called delimater
scanf("%c %c %"&a,&b,&c)  
now we can enter 
A B C  ✅
A\tB\tC✅
A\nB\nC✅

 */

// correct 
 #include<stdio.h>
int main(){
    char a,b,c;
    printf("Enter Number:");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c %c %c",a,b,c);
    return 0;
     
}