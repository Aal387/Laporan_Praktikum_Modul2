#include <stdio.h>

int main(void)
{
    float nilai1, nilai2, hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai2);

    hasil = nilai1 + nilai2;

    printf("Hasil dari penjumlahan nilai pertama \"%.2g\" dan nilai kedua \"%.3g\" adalah \"%.2f\"\n",
        nilai1, nilai2, hasil);

    return 0;
}