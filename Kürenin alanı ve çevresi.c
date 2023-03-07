#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14

float alan(int cap)
{
    float sonuc;
    sonuc=4*pi*cap*cap;
    return sonuc;
}
float hacim(int cap)
{
    float sonuc;
    sonuc=(4*pi*cap*cap*cap)/3;
    return sonuc;
}

int main () {
    int küreyaricap;
    int secim;

    printg("Kürenin yaricapini giriniz:");
    scanf("%d", &küreyaricap);
    printf("Hangi islemi yapacaksiniz Bayim?");
    printf("1.Kürenin alani\n");
    printf("2.Kürenin hacmi\n");
    scanf("%d", &secim);

    if(secim==1)
    {
        printf("Kürenin alani: %.2f", alan(küreyaricap));
    }
    else if(secim==2)
    {
        printf("Kürenin hacmi: %.2f", hacim(küreyaricap));
    }
    else
    {
        printf("Yanlis secim yaptiniz");
    }
    return 0;
}