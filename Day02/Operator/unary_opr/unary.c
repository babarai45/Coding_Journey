#include<stdio.h>
int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    // Unary operators
    printf("a = %d\n", a);
    printf("++a = %d\n", ++a); // Pre-increment
    printf("a++ = %d\n", a++); // Post-increment
    printf("a = %d\n", a);

    printf("b = %d\n", b);
    printf("--b = %d\n", --b); // Pre-decrement
    printf("b-- = %d\n", b--); // Post-decrement
    printf("b = %d\n", b);

    printf("c = %d\n", c);
    printf("-c = %d\n", -c); // Unary minus
    //  siezof operator 
    //  checking memeorysize of integer 
    int x;
    x = sizeof(float);
    printf("size of flaot is %d\n",x);
    x = sizeof(int);
    printf("size of int is %d\n",x);
    x = sizeof(char);
    printf("size of char is %d\n",x);
    x = sizeof(double);
    printf("size of double is %d\n",x);

    return 0;
}
