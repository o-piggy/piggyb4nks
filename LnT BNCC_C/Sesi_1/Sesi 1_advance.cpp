#include <stdio.h>
#include <windows.h> // untuk Sleep() dan system("cls")

void animasiProses(char *pesan) {
    printf("%s", pesan);
    for (int i = 0; i < 3; i++) {
        Sleep(500);
        printf(".");
        fflush(stdout);
    }
    Sleep(400);
    system("cls");
}

int main() {
    int k1, k2;
    char key;

    printf("Masukkan Kunci 1 (K1): ");
    scanf("%d", &k1); getchar();

    animasiProses("Memverifikasi Kunci 1");

    if (k1 >= 100 && k1 <= 500) {
        printf("Masukkan Kunci 2 (K2): ");
        scanf("%d", &k2); getchar();

        animasiProses("Memverifikasi Kunci 2");

        if (k2 >= 200 && k2 <= 600) {
            printf("Masukkan Karakter Sandi (Huruf Kapital): ");
            scanf(" %c", &key);

            animasiProses("Memverifikasi Karakter Sandi");

            if (key >= 65 && key <= 90) {
                int sum_key = k1 + k2;
                float modulo_operation = sum_key % 17;
                char bitwise_key = (key | 32) + 2;

                animasiProses("Menghasilkan Kode Akses");

                printf("\n---------------------------------------------\n\n");
                printf("STATUS ACCESS GRANTED, WELCOME AGENT SIGMA\n");
                printf("VERIFIKASI NUMERIK\t: %.2f\n", modulo_operation);
                printf("KODE AKSES FINAL\t: %c %c\n\n", key, bitwise_key);
                printf("---------------------------------------------\n");
            } else {
                printf("Karakter sandi tidak valid.\n");
            }
        } else {
            printf("Kunci 2 di luar rentang.\n");
        }
    } else {
        printf("Kunci 1 di luar rentang.\n");
    }

    return 0;
}

