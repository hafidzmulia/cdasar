#include <stdio.h>
int main()
{
   int w,k,sum;
   float avg, fsum, fw;
   printf("Selamat Datang di Perhitungan Rata-rata !\n");
   sum = 0;
   for (w=1;w<=2;w = w+1){
       printf("Masukkan Data ke %d : ", w);
       scanf("%d", &k);
       sum = sum + k;
   }
   printf("Nilai total dari data tersebut adalah %d\n", sum);
   fsum = sum;
   avg = fsum/(w-1);
   printf("Nilai Rata-rata dari %d tersebut adalah %0.2f", w-1, avg);
}
