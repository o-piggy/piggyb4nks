#include <stdio.h>

int main(){
	
	int a = 1;
	int b = 2;
	int c = 3;
	int largest = 0;
	
	if (a>b && a>c){
		largest = a;
	}
	else if (a<b && b>c){
		largest = b;
	}
	else {
		largest = c;	
	}
	
	printf("%d", largest);
	
	
	return 0;
}
