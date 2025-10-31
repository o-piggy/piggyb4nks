#include <stdio.h>

int main(){
	
	int panjang = 5;
	//scanf("%d", &panjang);getchar();
	for (int i = 0 ; i  <=  panjang ; i++){ 
		for (int j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
