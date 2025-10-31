#include <stdio.h>
#include <string.h>

typedef struct{
	int id;
	char judul[50];
	int tahun;
}Film;

Film M;

void tampilkan_film(const Film *f){
	printf(" ID Film: %d\n", f->id);
	printf(" Judul: %s\n", f->judul);
	printf(" Tahun: %d\n", f->tahun);
}

int main (){
	Film film_favorit = {77, "Interstellar", 2014};	
	Film film_kedua = {88, "Inception", 2010};
	
	Film *ptr_film;
	
	printf("Kasus: Gabungan dari Pointer dengan Struct\n");
	
	ptr_film = &film_favorit;
	
	printf("Data Film Favorit (Akses Melalui Pointer): \n");
	
	// Pointer harus pake -> seperti *
	ptr_film->tahun = 2015;
	
	tampilkan_film(ptr_film);
	
	ptr_film = &film_kedua;
	
	printf("\nData Film Kedua (Akses Melalui Pointer): \n");
	
	tampilkan_film(ptr_film);
	
	return 0;		
}
