//Write a program that asks the user to enter two numbers, obtains them from the user and
//prints their sum, product, difference, quotient and remainder.

#include <stdio.h>

int main(){
	
	
	int a,b;
	printf("First Number : ");scanf ("%d", &a); getchar();
	printf("Second Number : ");scanf ("%d", &b); getchar();
	printf("Sum : %.1lf\n", (float)a+b);
	printf("Product : %.1lf\n", (float)a*b);
	printf("Difference : %.1lf\n", (float)a-b);
	printf("Quotient : %.1lf\n", (float)a/b);
	printf("Remainder : %d\n", a%b);	
	
	return 0;
}
