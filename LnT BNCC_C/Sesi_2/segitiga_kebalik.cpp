#include <stdio.h>

int main(){
	
	int tinggi = 5;
	
	int i = tinggi;
	
	while(i>=1){
		int j = 1;
		
		while (j <= i){
			printf("* ");
			j++;
		}
		printf("\n");
		i--;
	}
	
	return 0;
}
