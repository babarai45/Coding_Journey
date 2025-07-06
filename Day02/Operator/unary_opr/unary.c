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

int n,m;
n= sizeof(m);
printf("varbale m size is %d\n",n);



// -----------cosntant sizecehecking 

int p;
p=sizeof(65);
printf("value of 65 memeory size is %d\n",p);
p=sizeof(4.3);  // it is considerd as real number so its always doubletyped 
printf("value of 65 memeory size is %d\n",p);
p=sizeof(0.4566);
printf("value of 0.4566 memeory size is %d\n",p);

p=sizeof('A');
printf("value of A memeory size is %d\n",p);




    return 0;
}
