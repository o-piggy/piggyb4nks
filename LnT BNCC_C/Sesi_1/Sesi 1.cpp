#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("Color 2");
	
	int k1,k2;
	char key;
	printf("Masukkan Kunci 1 (K1): ");scanf("%d",&k1);getchar();

	if (k1 >= 100 && k1<=500){
		printf("Masukkan Kunci 2 (K2): ");scanf("%d",&k2);getchar();
		if (k2 >= 200 && k2<=600){
			printf("Masukkan Karakter Sandi (Huruf Kapital): ");scanf("%c",&key);getchar();
			if (key >= 65 && key<= 90){
				
			int sum_key = k1 + k2;
			float modulo_operation = sum_key%17;
			char bitwise_key = (key | 32) + 2 ;
			
			printf("\n");
			printf("---------------------------------------------\n\n");
			printf("STATUS ACCESS GRANTED, WELCOME AGENT SIGMA\n");
			printf("VERIFIKASI NUMERIK\t: %.2f\n", modulo_operation);
			printf("KODE AKSES FINAL\t: %c %c\n\n", key, bitwise_key);
			printf("---------------------------------------------\n");
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}
