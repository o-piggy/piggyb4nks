#include <stdio.h>
#include <stdlib.h>

int main() {
    char y_n;
    do {
        int n = 5; 
        int count = 0;
        int beratKomponen;
        int beratTotal = 0;

        system("color 2");
        printf("---- SISTEM DISPATCHER UNIT SENSORIK VORTEX ----\n\n");
        printf("================================================\n");
        printf("MEMPROSES UNIT BARU . . .\n\n");

        for (int i = 1; i <= n; i++) {
            printf("Input berat Komponen #%d (kg): ", i);
            scanf("%d", &beratKomponen);

            if (beratKomponen < 10 || beratKomponen > 50) {
                printf("Diluar Toleransi\n");
                continue;
            } else {
                beratTotal += beratKomponen;
                count++;
            }
        }

        printf("\n-- Hasil Pemeriksaan Komponen --\n");
        printf("Total Berat Unit (Lolos): %d kg\n", beratTotal);
        printf("Apakah Total Berat unit ini melebihi 150 kg? ");
        if (beratTotal > 150) {
            printf("YA\n");
        } else {
            printf("TIDAK\n");
        }

        printf("\nKUALITAS UNIT DITENTUKAN: Tingkat ");
        if (count == 5 && beratTotal > 200) {
            printf("A Sempurna\n");
            printf("Tidak Memerlukan Audit\n");
        } 
        else if (beratTotal >= 150 && beratTotal < 200) {
            printf("B Baik\n");
            printf("Tidak Memerlukan Audit\n");
        } 
        else if (beratTotal >= 100 && beratTotal < 150) {
            printf("C Cukup\n");
            printf("Memerlukan Audit Wajib\n");
        } 
        else if (beratTotal < 100) {
            printf("D Gagal\n");
            printf("Memerlukan Audit Wajib\n");
            int KP = 0;
            while (KP != 999) {
                printf("Masukkan Kode Perbaikan: ");
                scanf("%d", &KP);
            }
            printf("Unit Gagal Total. Dihancurkan\n");
            return 0;
        }

        int KD;
        printf("\nMasukkan Kode Destinasi Pengiriman ('1', '2', '3'): ");
        scanf("%d", &KD);

        printf("Status Pengiriman: ");
        switch (KD) {
            case 1:
                printf("Pengiriman Kilat\n");
                break;
            case 2:
                printf("Pengiriman Standar\n");
                break;
            case 3:
                printf("Pengiriman Hemat\n");
                break;
            default:
                printf("Kode tidak valid\n");
        }

        printf("\nProses Unit Lain? (Y / N): ");
        scanf(" %c", &y_n);  // ada spasi!

    } while (y_n == 'Y' || y_n == 'y');

    printf("\nProgram Selesai.\n");
    return 0;
}

