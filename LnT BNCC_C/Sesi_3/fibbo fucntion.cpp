#include <stdio.h>
#include <string.h>

int fibbo(int n);

int main(){
	
	int n = 8;
	int hasil = fibbo(n);
	
	printf("Angka Fibbo ke-%d adalah: %d\n", n, hasil);
	printf("\nShow %d suku pertama: \n", n);
	for (int i = 0; i < n; i++){
		printf("%d ", fibbo(i));
	}
	
	return 0;
}

int fibbo(int n){
	
	if (n == 0) {
		return 0;	
	}
	else if ( n == 1){
		return 1;
	}
	else{
		//F(n) = F(n-1) + F(n-2)
		return fibbo(n-1) + fibbo (n-2);
	}
}

