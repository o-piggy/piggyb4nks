#include <stdio.h>

int main(){
	
	int tinggi = 5;
	int baris = 1;
	
	while (baris <= tinggi){
		int spasi = 1;
		
		while(spasi<=(tinggi-baris)){
			printf(" ");
			spasi++;
			
		}
		int bintang = 1;
		while ( bintang <= (2*baris) - 1){
			printf("*");
			bintang++;
		}
		printf("\n");
		baris++;
	}
	
	return 0;
}
