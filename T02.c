#include <stdio.h>

int main() {

    int N;

    // Input jumlah data
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    int nilai[N];

    // Input nilai
    printf("Masukkan %d nilai:\n", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    int kode;
    printf("Masukkan kode kelompok (1 atau 2): ");
    scanf("%d", &kode);  

    int total = 0;
  
    // Proses penjumlahan berdasarkan kelompok
    for(int i = 0; i < N; i++) {

        if(kode == 1 && i % 2 == 0) {
            total += nilai[i];
        }

        else if(kode == 2 && i % 2 != 0) {
            total += nilai[i];
        }
    }

    // Output
    printf("Total nilai kelompok %d adalah: %d\n", kode, total);

    return 0;
}