/* Bikin Coding untuk Input Nama dan Predikat IPK*/

#include <stdio.h>
int main()
{
    float K, H, CL = 7.0/2, L = 6.0/2;
    char W[20];
    printf("Selamat Datang, Silakan masukkan Nama Anda !\n");
    printf("Nama : ");
    scanf("%s", W);
    printf("Haloo %s , Silakan masukkan IPK anda !\n", W);
    printf("IPK : ");
    scanf("%f", &K);
    H = K;
    printf("Predikat anda : ");
    if (H>CL){
        printf("Lulus dengan Pujian");
    }
    else if ((H > L) && (H<=CL)) {
        printf("Lulus sangat memuaskan");
    }
    else {
        printf("Lulus memuaskan");
    }
}