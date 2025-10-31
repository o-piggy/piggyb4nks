#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
	char nim[15];
	char nama[50];
	int nilai_akhir;
}Mahasiswa;

Mahasiswa M[MAX];
int jumlahMahasiswa = 0;

//while ((c = getchar()) != '\n' && c!=EOF); //File Processing

void show(){
	printf("\n======== Daftar Masasiswa ========\n");
	if(jumlahMahasiswa == 0){
		printf("Belum ada data\n");
	}else {
		printf("No.	| Nama			|	Nilai Akhir	|\n");
		for (int i = 0; i < jumlahMahasiswa; i++){
			printf("%-3d | %-14s | %-35s | %s\n", i+1, M.nim, M.nama M.nilai_akhir);
		}
		printf("\n==============================\n");
	}
}

void tambah(){
	
}

void update(){
	
}

void hapus(){
	
}
int main(){
	int choose;
	do {
		printf("\nDatabase Mahasiswa\n");
		printf("1. Tampilkan Seluruh Mahasiswa\n");
		printf("2. Tambah Mahasiswa");
		printf("3. Update");
		printf("4. Hapus Data Mahasiswa");
		printf("5. Exit");
		
		do{
			printf("Choose: ");
			scanf("%d", &choose );
		}while (choose < 1 || choose > 4)
		
	}while (choose != 5);

	switch choose{
		case 1 : 
			show()
			break;
		case 2 :
			tambah()
			break;
		case 3 :
			update()
			break;
		case 4 :
			hapus()
			break;
		default :
			printf("Invalid Option");
			break;
	}
	return 0;
}
