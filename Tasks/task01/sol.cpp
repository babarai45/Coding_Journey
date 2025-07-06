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

int main(){
    int r;
    const float PI = 3.14;\
    cout<<"Enter radius of Circle"<<endl;
    cin>>r;
    float circumference = 2 * PI * r;
    cout<<"Circumferecne of circle with radius of "<<r<<" is "<<circumference<<endl;
    return 0;
}