#include <stdio.h>
int main(){
    int w,k, pembagi, kesimpulan;
    kesimpulan = 1;
    
    printf("Selamat datang di pengecekan bilangan prima\n");
    printf("Silakan masukkan angka yang ingin di cek : ");
    scanf("%d", &w);
    
    if (w == 0 || w == 1){
        kesimpulan = 0;
    }
    else {
        for (k = 2; k <= (w/2); k = k +1){
            if (w%k == 0){
                pembagi = k;
                kesimpulan = 1;
                break;
            }
        }
    }
    printf("Kesimpulan adalah %d\n", kesimpulan);
    if (kesimpulan = 1){
        printf("Bilangan %d adalah bilangan prima",w);
    }
    else {
        printf("Bilangan %d bukan bilangan prima, memiliki pembagi yaitu %d", w, pembagi);
    }
}