// Algoritma Penentu Nilai Akhir dan Indeksnya
#include <stdio.h>
int main(){
    int uts, uas, tugas, presensi, NA;
    char *predikat = "";
    printf("Selamat Datang di Perhitungan Nilai Akhir\n");
    printf("=========================================\n");
    printf("Masukkan Nilai dengan Skala 1-100 !\n");
    printf("UTS : ");
    scanf("%d", &uts);
    printf("UAS : ");
    scanf("%d", &uas);
    printf("Tugas : ");
    scanf("%d", &tugas);
    printf("Presensi : ");
    scanf("%d", &presensi);
    
    NA = uts * 0.3 + uas * 0.4 + tugas * 0.2 + presensi * 0.1;
    
    while (NA < 0 || NA > 100){
        printf("Silakan Input Data yang Benar !\n");
        printf("UTS : ");
        scanf("%d", &uts);
        printf("UAS : ");
        scanf("%d", &uas);
        printf("Tugas : ");
        scanf("%d", &tugas);
        printf("Presensi : ");
        scanf("%d", &presensi);
        NA = uts * 0.3 + uas * 0.4 + tugas * 0.2 + presensi * 0.1;
    }
    printf("Nilai Akhir anda adalah %d\n", NA);
    if (NA >= 85){
        predikat = "A";
    }
    else if (NA >= 70){
        predikat = "B";
    }
    else if (NA >= 55){
        predikat = "C";
    }
    else if (NA >= 40){
        predikat = "D";
    }
    else {
        predikat = "E";
    }
    printf("Predikat Nilai Anda adalah : %s", predikat);
}