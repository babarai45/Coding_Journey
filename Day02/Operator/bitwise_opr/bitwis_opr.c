/* bitwise operatoer in c 

bit meaning is 0 or 1 digits 
operators = {& and , | or , ^ xor , ~ not , >> rightshift ,<< leftshift}

_____________________________________________________
        And    OR    XOR(both same is zero)
0 & 0  = 0     0     0
0 & 1  = 0     1     1
1 & 0  = 0     1     1
1 & 1  = 1     1     0

Not(~) CHANGE 0 TO 1 AND 1 TO zero 


*/
#include<stdio.h>
int main(){
    int x=25&72;
    int y = 23|47;
     
    printf("Answer is x %d\n",x);
    printf("Answer is y %d\n",y);
/* 
Right siffit>>
left shift <<
*/
    int f =25>>2;
 
    printf("Answer is right ssift %d\n",f);


        int l =25<<2;
 
    printf("Answer is left ssift %d\n",l);

    
        int g=~8;
 
    printf("Answer is not operator %d\n",g);
    return 0;
}