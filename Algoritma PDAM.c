// Algoritma Bayar PDAM Bulanan
#include <stdio.h>
int main(){
    int admin, total, w, k;
    admin = 10000;      // Biaya administrasi bulanan sebesar 10.000
    total = admin;
    printf("Silakan Masukkan Volume Penggunaan Air Minum Anda dalam M kubik\n");
    printf("Volume : ");
    scanf("%d", &w);
    while (w <= 0){
        printf("Silakan Masukkan angka yang benar !\n");
        printf("Volume Penggunaan Air Minum : ");
        scanf("%d", &w);
    }
    if (w <= 10){       // Tarif per m3 untuk <= 10 m3 pertama (1-10) adalah 2.000
        total += 10 * 2000;
    }
    else if (w <= 20){
        total += 10 * 2000 + (w-10) * 3000;     // Tarif per m3 untuk 10 m3 kedua (11-20) adalah 3.000
    }
    else if (w <= 30){
        total += 10 * 2000 + 10 * 3000 + (w-20) * 4000; // Tarif per m3 untuk 10 m3 ketiga (21-30) adalah 4.000
    }
    else {
        total += 10 * 2000 + 10 * 3000 + 10 * 4000 + (w-30) * 5000; //Tarif per m3 untuk 10 m3 selanjutnya (31 ke atas) adalah 5.000
    }
    printf("Biaya Tagihan Air Minum Anda adalah %d rupiah", total);
}