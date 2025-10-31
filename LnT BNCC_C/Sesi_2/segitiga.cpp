#include <stdio.h>

int main(){
	
	int tinggi = 5;
	
	int i = 1;
	
	while(i<=tinggi){
		int j = 1;
		
		while (j <= i){
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}
