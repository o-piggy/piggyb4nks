#include <stdio.h>

int main(){
	int a,b;
	printf("Enter the first integer\n");
	scanf("%d", &a); getchar();
	printf("Entert the second integer\n");
	scanf("%d", &b); getchar();
	int sum = a + b;
	printf("Sum is %d", sum);
	
	
	return 0;
}
