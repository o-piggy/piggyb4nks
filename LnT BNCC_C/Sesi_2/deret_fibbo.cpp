#include <stdio.h>

int main(){
	
	int N;
	int a = 0;
	int b = 1;
	int next;
	
	int i = 1;
	printf("Deret Fibbo (%d angka);\n");
	
	while (i <= N){
		printf("%d ", a);
		
		next = a+b;
		
		a = b; 
		b = next;
		
		i++;
	}
	printf("\n");
	return 0;
}
