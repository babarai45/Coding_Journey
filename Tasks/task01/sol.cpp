#include<iostream>
using namespace std;


// Ans_01
// int main(){
//     int a,b,c;
//     cout<<"Enter three integer with space"<<endl;
//     cin>>a>>b>>c;
//     cout<<"the avarage of above three integer "<<(a+b+c)/3<<endl;
//     return 0;
// }


// Ans_02

// int main(){
//     int r;
//     const float PI = 3.14;\
//     cout<<"Enter radius of Circle"<<endl;
//     cin>>r;
//     float circumference = 2 * PI * r;
//     cout<<"Circumferecne of circle with radius of "<<r<<" is "<<circumference<<endl;
//     return 0;
// }

// Q3- Write a program to calculate simple interest and print the result and input values 
// from user.
// _________Ans_03 

// int main(){
//     // p is principal of amaount
//     // y year total time duration
//     // r rate of ration of intrest
//     int p,y,r;
//     cout<<"Enter Amout ,Years,Intrest_Rate"<<endl;
//     cin>>p>>y>>r;
//     // totle_intrest = ()
//     cout<<"your intrest is "<<(p*y*r)/100<<endl;
// }


// Q4- Write a program to calculate the volume of cuboid and print the result and input values from user.
// _________Ans_04

// int main(){
//     int l,w,h;
//     cout<<"Enter lenth,witdh and hight of voulum"<<endl;
//     cin>>l>>w>>h;
//     cout<<"volum of cuboid is "<<l*w*h<<endl;
//     return 0;
// }
//_________________________________________

// Q5- Write a program to ask user cost price and selling price of banana per dozen and 
// calculate profit or loss earned upon 25 bananas selling.
// _________Ans_04
int main(){
     
   float  cost_per_dozen,
    sale_value_per_dozen,
    cost_per_bana,
    sale_value_per_bana,
    total_sales,
    total_expence,
    net_profit;

    cout<<"Enter Cost of Banan per Dozen: ";
    cin>>cost_per_dozen;
    cout<<"Enter sale value per dozen:";
    cin>>sale_value_per_dozen;
    
    cost_per_bana = cost_per_dozen/12.0;
    sale_value_per_bana = sale_value_per_dozen/12.0;
    total_sales = 25*sale_value_per_bana;
    total_expence = 25*cost_per_bana;

    net_profit = total_sales - total_expence;
    if(net_profit>0){
        cout<<"Total profit after saling 25 banans is "<<net_profit;
    }
    else if(net_profit < 0){
        cout<<"Total loss is after saling 25 banas is "<<net_profit;
    }
    else{
        cout<<"Not profit and not loss\n";
    }
    
    



    return 0;
}