// operator: This project uses the C17 operator.
#include <stdio.h>
int main(){
	printf("Operater priorites \n");
	printf("unary operator\n");
	printf("-,+,++,--\n");
	int x =5,y;
	printf("the original value  of x is %d\n",x);
//	y=x++;
	printf("post increment of x %d\n",x);
	printf("psot increment of y %d\n",y);
	// now for decrement 
	y=x--;
	printf("post decrement of x %d\n",y);
	
	printf("post decrement of x %d\n",x);



		return 0;
		
	}
