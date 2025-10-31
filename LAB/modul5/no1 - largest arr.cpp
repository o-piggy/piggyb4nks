#include <stdio.h>

int main(){
	
	int n;
	printf("How many numbers ? ");
	scanf("%d", &n);
	int arr[n+1];
	
	for (int i = 0; i < n; i++){
		printf("Enter number [%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int max_arr = arr[0];
	
	for (int i = 0; i < n; i++){
		if (arr[i] > max_arr) {
			max_arr = arr[i];
		}
	}
	
	printf("Largest Element in the Array is %d", max_arr);
	
	return 0;
	
}
