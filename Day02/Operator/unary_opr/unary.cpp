#include<iostream>
using namespace std;

int main() {
/* unary oeprater in c++ */
// ------psot increament 
int x =5,y;
cout<<"Original value of x is "<<x<<endl;
y=x++; // psot increament 
cout<<"after post increment of x value is "<<x<<" and y is "<<y<<endl;

// post decrement 
int a =5,b;
cout<<"Original value of a is "<<a<<endl;
b=a--; // psot decrement 
cout<<"after post decrement of a value is "<<a<<" and b is "<<b<<endl;

// ---------------------pre incremwent/decrement--------------->


int c=5,d;
cout<<"orignal value of c befor pre-increament is "<<c<<endl;

d=++c;
cout<<"after pre-increment value of c is "<<c<<"and d is "<<d<<endl;
/* here is both c and d  have same value becuse pre-increamnt priority is high 
also higher tahn assingment opr so 
first ++c = c=c+1 = 6 and
then it assign  tio y = 6 
*/

//  pre decrement ---------

int f=5,e;
cout<<"orignal value of f befor pre-increament is "<<f<<endl;

e=--f;
cout<<"after pre-increment value of f is "<<f<<"and e is "<<e<<endl;

//  same situation of abaove 



//--------------sizeoff 


    int z;
    z = sizeof(float);
    cout<<"memory allocation size of flaot is "<<z<<endl;
    
    z = sizeof(float);
    cout<<"memory allocation size of flaot is "<<z<<endl;
    
    z = sizeof(int);
    cout<<"memory allocation size of int is "<<z<<endl;
  
    z = sizeof(char);
    cout<<"memory allocation size of char is "<<z<<endl;
   
    z = sizeof(double);
    cout<<"memory allocation size of double is "<<z<<endl;

/* we can chcek varibale size and also constant size as well  */

int n,m;
n= sizeof(m);
cout<<"varbale m size is "<<n<<endl;



// -----------cosntant sizecehecking 

int p;
p=sizeof(65);
cout<<"meomory size of 65 is "<<p<<endl;
p=sizeof(4.3);  // it is considerd as real number so its always doubletyped 
cout<<"meomory size of 4.3 is "<<p<<endl;
p=sizeof(0.4566);
cout<<"meomory size of 0.4566 is "<<p<<endl;

p=sizeof('A');
cout<<"meomory size of 'A' is "<<p<<endl;






    return 0;

}