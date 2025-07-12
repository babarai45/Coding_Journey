// Q1-Write A program to input character from user and prints its ASSCI code;

// // Ans_01
// #include<iostream>
// using namespace std;
// int main(){
// char ch;
// cout<<"Enter chacter :";
// cin>>ch;
// cout<<"your entered chacter "<<ch<<" ASSCI code  is "<<int(ch);
// return 0;
// }


// Q2- Write a program to input a ASSCI from user and print character

// Ans_02


// #include<iostream>
// using namespace std;
// int main(){
//     int assci;
//     cout<<"Entere Assci code: ";
//     cin>>assci;
//     cout<<"The Entered Assci code chactere "<<assci<<" is in Chacter of "<<char(assci);
//     return 0;
// }




//Q3- write a program to three input character from user and print their ASCII code with character crosspondingly;

// Ans_03


// #include<iostream>
// int main(){
//     char ch1,ch2,ch3;
//     std::cout<<"Enter three character with space!:"<<std::endl;
//     std::cin>>ch1 >> ch2 >> ch3;
//     std::cout<<"your Entered\n";
//     std::cout<<ch1<<" -> ASCII:  "<< int(ch1) << std::endl;
//     std::cout<<ch2<<" -> ASCII:  "<< int(ch2) << std::endl;
//     std::cout<<ch3<<" -> ASCII:  "<< int(ch3) << std::endl;
    
//     return 0;
// }


// Q4- Write a program to print the last digit of a number entered by user;

// // Ans_04
// #include<iostream>
// int main(){
//     int num;
//     std::cout<<"Enter Number:";
//     std::cin>>num;
//     std::cout<<" The Last digits of Entered Numbers "<<num % 10;
//     return 0;
// }


// Ans_05


#include<iostream>
int main(){
    int num;
    std::cout<<"Enter Number:";
    std::cin>>num;
    std::cout<<" The Last digits of Entered Numbers "<<num / 10;
    return 0;
}