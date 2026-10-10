#include <stdio.h>
#include <math.h>
int main(void)
{
    float A, B, alas, tinggi, keliling, luas;
    scanf("%f %f", &A, &B);
    tinggi = A;
    alas = sqrt(B * B - A * A);
    keliling = alas + tinggi + B;
    luas = alas * tinggi / 2;
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);
    return 0;
}