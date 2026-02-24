#include <stdio.h>
#include <string.h>

int main() {

    int pilihan;
    float totalPemasukan = 0;

    do {
        printf("\n===== SISTEM LAUNDRY DEL =====\n");
        printf("1. Tambah Transaksi\n");
        printf("2. Lihat Total Pemasukan\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        if(pilihan == 1) {

            char nama[50];
            float berat;
            int layanan;
            float hargaPerKg = 0;
            float total;

            printf("\nNama Pelanggan: ");
            scanf(" %[^\n]", nama);

            printf("Berat pakaian (kg): ");
            scanf("%f", &berat);

            printf("\nJenis Layanan:\n");
            printf("1. Cuci Reguler (7000/kg)\n");
            printf("2. Cuci + Setrika (10000/kg)\n");
            printf("3. Express (15000/kg)\n");
            printf("Pilih layanan: ");
            scanf("%d", &layanan);

            switch(layanan) {
                case 1:
                    hargaPerKg = 7000;
                    break;
                case 2:
                    hargaPerKg = 10000;
                    break;
                case 3:
                    hargaPerKg = 15000;
                    break;
                default:
                    printf("Layanan tidak valid!\n");
                    continue;
            }

            total = berat * hargaPerKg;

            // Diskon jika berat lebih dari 10 kg
            if(berat > 10) {
                float diskon = total * 0.1;
                total -= diskon;
                printf("Diskon 10%% diterapkan!\n");
            }

            totalPemasukan += total;

            printf("\n===== STRUK LAUNDRY =====\n");
            printf("Nama Pelanggan : %s\n", nama);
            printf("Berat          : %.2f kg\n", berat);
            printf("Harga per Kg   : %.0f\n", hargaPerKg);
            printf("Total Bayar    : %.0f\n", total);
            printf("Status         : Diproses\n");
            printf("==========================\n");

        }
        else if(pilihan == 2) {
            printf("\nTotal Pemasukan Hari Ini: %.0f\n", totalPemasukan);
        }
        else if(pilihan == 3) {
            printf("Terima kasih telah menggunakan sistem Laundry Del.\n");
        }
        else {
            printf("Pilihan tidak valid!\n");
        }

    } while(pilihan != 3);

    return 0;
}