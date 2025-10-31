#include <stdio.h>

int main(){
	
	int sisi = 4;
	
	int i =1;
	
	while(i<=sisi){
		int j = 1;
		
		while (j <= sisi){
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}
