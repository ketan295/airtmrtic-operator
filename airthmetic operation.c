#include<stdio.h>

main()
{
	int a=25;
	int b=5;
	int c;
	
	c=a+b;
	printf("ADDITION OF %d and %d= %d \n" ,a,b,c);
	c=a-b;
	printf("SUBSTRACTION OF %d and %d= %d \n" ,a,b,c);
	c=a*b;
	printf("MULTIPLICATION OF %d and %d= %d \n" ,a,b,c);
	c=a/b;
	printf("DIVISION OF %d and %d= %d \n" ,a,b,c);
	c=a%b;
	printf("MODULO OF %d and %d= %d" ,a,b,c);
	
}
