#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define pf printf
#define sf scanf

int main()
{

    int tahun, bulan, hari, kabisat = 0;
    char bulaan[17][17] = {"JANUARI", "FEBRUARI", "MARET", "APRIL", "MEI", "JUNI", "JULI", "AGUSTUS", "SEPTEMBER", "OKTOBER", "NOVEMBER", "DESEMBER"};

    // Input data
    pf("\nMasukkan tahun: ");
    sf("%d", &tahun);
    pf("Masukkan bulan: ");
    sf("%d", &bulan);

    // Menghindari kesalahan input bulan
    if (bulan > 12)
    {
        pf("BULAN YANG ANDA INPUTKAN SALAH!!!");
    }
    else
    {

        // Check kabisat
        if (tahun % 4 == 0 && tahun % 100 != 0)
        {
            pf("Tahun %d adalah TAHUN KABISAT\n", tahun);
            kabisat = 1;
        }
        else
        {
            pf("Tahun %d BUKAN TAHUN KABISAT\n", tahun);
        }

        // Penentuan jumlah hari
        int buljil[7] = {1, 3, 5, 7, 8, 10, 12};
        for (int i = 0; i < sizeof(buljil) / sizeof(buljil[7]); i++)
        {
            hari = 30;
            if (bulan == buljil[i])
            {
                hari = 31;
                break;
            }
            else if (bulan == 2)
            {
                if (kabisat)
                {
                    hari = 29;
                    break;
                }
                else
                {
                    hari = 28;
                    break;
                }
            }
        }

        // Output
        pf("Jumlah hari pada bulan %s tahun %d adalah %d\n\n", bulaan[bulan - 1], tahun, hari);
    }
    // Penambahan titik koma disini
    // menambhakan komentar yang kedua
    // menambahkkan komentar yang ketiga
}
