#include <stdio.h>
#include <string.h>

struct barang{
	int kode;
	char nama[30];
	double harga;
};

int main(){
	
	struct barang produk_A = {1001, "Mouse Gaming", 25000.0};
	
	struct barang produk_B;
	produk_B.harga = 1002;
	strcpy(produk_B.nama, "Keyboard Mekanik");
	produk_B.harga = 75000.0;
	
	printf("Produk A:\n");
	printf("Kode: %d\n", produk_A.kode);
	printf("Nama: %s\n", produk_A.nama);
	printf("Harga: %d\n", produk_A.harga);

	printf("Produk B:\n");	
	printf("Harga: %d\n", produk_A.harga);
	printf("Harga: %d\n", produk_A.harga);
	printf("Harga: %d\n", produk_A.harga);

	return 0;
}
