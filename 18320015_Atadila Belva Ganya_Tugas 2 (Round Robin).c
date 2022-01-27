#include <stdio.h>
#include <stdlib.h>
//Nama  : Atadila Belva Ganya
//NIM   : 18320015/Teknik Biomedis'20

int main()
{
    printf("Berapa banyak proses yang akan dilakukan? ");
    int j_proses;
    scanf("%d", &j_proses);

    int i = 0;
    int kedatangan[100], eksekusi[100], temp[100];
    int totalwaktu = 0;

    for(i = 0; i<j_proses; ++i){
        printf("\nKeterangan untuk Proses %d (P%d)", i+1 , i+1);
        printf("\nWaktu kedatangan (ms) : ");
        scanf("%d", &kedatangan[i]);
        printf("Waktu eksekusi (ms) : ");
        scanf("%d", &eksekusi[i]);
        temp[i] = eksekusi[i];
        totalwaktu = totalwaktu + eksekusi[i];
    }

    int kuantum;
    printf("\nMasukkan waktu kuantum (ms) : ");
    scanf("%d", &kuantum);

    int time = 0, a=0, hasilkurang;
    int antrian[100];

    //inisiasi antrian pertama
    for (i=0; i<j_proses; ++i){
        if (kedatangan[i] == 0){
            antrian[0] = i;
            a = a+1;
        }
    }

    /*while(time<totalwaktu){
        //antrian keluar karena proses sudah selesai
        if (temp[antrian[0]] == 0){
            //antrian[0] keluar. catat waktu keluarnya
        }

        //proses berlangsung pada setiap ms
        temp[antrian[0]] = temp[antrian[0]]-1;

        //perpindahan antrian jika sudah berkurang sebanyak waktu kuantum. yg pindah antrian aja, urutan temp ga berubah
        if (temp[antrian[0]] >= kuantum){
            hasilkurang = temp[antrian[0]]-kuantum;
            if(temp[antrian[0]] = hasilkurang){
            //urutan antrian diubah
            }
        }

        //membaca apakah ada antrian baru
        for(i = 0; i<j_proses; ++i){
            if (time = kedatangan[i]){
                antrian[a] = i;
                a = a+1;
                //printf("P%d\t", antrian[a]);
            }
        }

        time++;
    }*/

    printf("\nProses\t\tWaktu kedatangan (ms)\tDurasi eksekusi (ms)");
    for(i = 0; i<j_proses; ++i ){
        printf("\nP%d\t\t%d\t\t\t%d", i + 1, kedatangan[i], eksekusi[i]);
    }

    printf("\n\nTotal waktu untuk memproses seluruh eksekusi adalah %d ms.", totalwaktu);

    return 0;
}
