/* Arithmatic operater in c 
 1-  * / or / * or %     is quala priorty 
 2- + - 

using assocative rules { L-->R } letf to right only when * / % are same 
in expresion
int a =5 and b=3 and c=6
example:
a * b / c  --------> Expresion
  1and2
it mean it has two operater  so which one fisrt solve so as rul if 
expresion has multiple same priorty operatot then apply associative ruslt left to right
{L->R}  
so 
a*b = 5*3= 15
ab/c = 15/6 =

*/
#include<stdio.h>
int main(){
    int  a=5,b=3,c=3;
    printf("Answer of this quation is %d\n",a*b/c);
    // so here it is used L->R associative rule

    printf("Answer of this quation is %d\n",a+b*c);

    
}