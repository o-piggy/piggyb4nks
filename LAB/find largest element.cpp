#include <stdio.h>

int main(){
	
	int arr[6] = {5, 8, 7, 3, 4};
	int largest_1 = 0;
	for ( int i= 0 ; i < 5 ; i++){
		if (arr[i] > largest_1){
			largest_1 = arr[i];
		}
	}
	printf("%d", largest_1);
	
	
	return 0;
}
