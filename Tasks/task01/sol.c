// Q1: Write A programe to calculate avarage of three integer and 
// print the result and input values from user?


// _________Ans_01
#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter number with space \n");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a+b+c)/3.0; // why 3.0 becuse  if (a+b+c)/3 then answer is in interge and becuse inter with interge so answer also integer`
    printf("Avarage of given interger is %f\n",avg);
}
// ____________________________________________________________

// Q2- Write a program to calculate the area of circumference of a circle
// and print the result and input values from user.

// _________Ans_02
// #include<stdio.h>
// int main(){
// int r;
// const float   PI = 3.14; 
// printf("Enter Radius  of circle \n");
// scanf("%d",&r);
// float circumference = 2 * PI * r;
// printf("Circumference of circle with radius %d is: %0.2f\n", r, circumference);
    // 0.2 meaning is jsut print after poit only 2 digits and if 3 then it print three
// }
// ___________________________________________



// Q3- Write a program to calculate simple interest and print the result and input values 
// from user.


// #include<stdio.h>
// int main(){
//     int amaount,year;
//      float intrest_rate,Intrest;
//     printf("Enter amount,year and Intrest of rate \n");
//     scanf("%d%d%f",&amaount,&year,&intrest_rate);
//     Intrest = (amaount*intrest_rate*year)/100;
//     printf("your intrest according to given rate is %f\n",Intrest);
// }
// ___________________________________________________

// // Q4- Write a program to calculate the volume of cuboid and print the result and input values from user.
// // _________Ans_04
// #include<stdio.h>
// int main(){
//     int l,w,h;
//     printf("Enter length,witdh/breath and hight of cubic voulum\n");
//     scanf("%d%d%d",&l,&w,&h);
//     printf("The Voulum of cuboid is %d \n",l*w*h);
//     return 0;
// }
// __________________________________________________________
//good approch and correct 

// #include<stdio.h>
// int main(){
//     float cp,sp;
//     printf("Enter length,witdh/breath and hight of cubic voulum\n");
//     scanf("%f%f",&cp,&sp);
//     printf("The Profit - loss %f \n",cp-sp/12*15);
//     return 0;
// }




//weak approach but correct 
// Q5- Write a program to ask user cost price and selling price of banana per dozen and 
// calculate profit or loss earned upon 25 bananas selling.
// _________Ans_04
// #include<stdio.h>
// int main(){
    
//    float  cost_per_dozen,
//     sale_value_per_dozen,
//     cost_per_bana,
//     sale_value_per_bana,
//     total_sales,
//     total_expence,
//     net_profit;

//     printf("Enter Cost of Banan per Dozen: ");
//     scanf("%f",&cost_per_dozen);
//     printf("Enter sale value per dozen: ");
//     scanf("%f",&sale_value_per_dozen);
    
//     cost_per_bana = cost_per_dozen/12.0;
//     sale_value_per_bana = sale_value_per_dozen/12.0;
//     total_sales = 25*sale_value_per_bana;
//     total_expence = 25*cost_per_bana;

//     net_profit = total_sales - total_expence;
//     if(net_profit>0){
//         printf("Total profit after saling 25 banans is %.2f\n",net_profit);
//     }
//     else if(net_profit < 0){
//         printf("Total loss is after saling 25 banas%.2f\n",net_profit);
//     }
//     else{
//         printf("Not profit and not loss\n");
//     }
    
//     // printf("Total loss after saling 25 banan is %d",*25);



//     return 0;
// }