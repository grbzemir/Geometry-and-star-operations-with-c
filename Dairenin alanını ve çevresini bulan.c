#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

  float dairedealan(int cap) {
    float sonuc;
    sonuc=pi*cap*cap;
    return sonuc;
    }
    float dairecevresi(int cap) {
    float sonuc;
    sonuc=2*pi*cap;
    return sonuc;
    }
    int main () {
        int daireyaricap,secim;

        printf("Dairenin yaricapini giriniz:");
        scanf("%d", &daireyaricap);
        printf("Hangi işlemi yapacaksiniz Bayim?");
        printf("1.Dairenin alanini hesapla\n");
        printf("2.Dairenin cevresini hesapla\n");
        scanf("%d", &secim);

        if(secim==1)
        {
            printf("Dairenin alani: %.2f", dairedealan(daireyaricap));
        }
        else if(secim==2)
        {
            printf("Dairenin cevresi: %.2f", dairecevresi(daireyaricap));
        }
        else
        {
            printf("Yanlis secim yaptiniz");
        }
        return 0;
    }
