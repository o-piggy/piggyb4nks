#include <stdio.h>

int main(){
	
	int panjang;
	scanf("%d", &panjang);getchar();
	for (int i = 0 ; i  <=  panjang ; i++){ //for (int i = 0 ; i <= panjang ; i++){
		
		for (int j = 0; j <= i; j++){
			printf("*");
//			if (j<i){
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
		}
		printf("\n");
	}
	return 0;
}
