#include <stdio.h>

int main(){
	
	int a = 3;
	int b = 1;
	int c = 2;
	int largest;
	if ( a > b ){
		largest = a;
		if ( largest > c ){
			largest = largest;
		}
		else {
			largest = c;
		}
		printf("%d", largest);
	}
	else {
		largest = b;
		if ( largest < c){
			largest = c;
			printf("%d", largest);
		}
	}
	
	return 0;
}
