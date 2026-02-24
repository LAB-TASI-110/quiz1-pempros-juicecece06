#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    int porsi;
    int harga;
    int subtotal;
    int total = 0;

    while(1) {

        printf("Masukkan kode menu: ");
        scanf("%s", kode);

        if(strcmp(kode, "END") == 0) {
            break;
        {

        printf("Masukkan porsi: ");
        scanf("%d", &porsi);

        if(strcmp(kode, "NGS") == 0) {
            harga = 20000;
        }
        else if(strcmp(kode, "AP") == 0) {
            harga = 15000;
        }
        else if(strcmp(kode, "GG") == 0) {
            harga = 18000;
        }
        else {
            harga = 0;
        }

        subtotal = harga * porsi;
        total = total + subtotal;
    }

    printf("\n===== STRUK PEMBELIAN =====\n");
    printf("Total Belanja: %d\n", total);

    if(total >= 200000) {
        printf("Kupon: Kuning\n");
    }
    else if(total >= 100000) {
        printf("Kupon: Biru\n");
    }
    else {
        printf("Kupon: Tidak dapat kupon\n");
    }

    return 0;
}