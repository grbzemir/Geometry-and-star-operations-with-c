#include<stdio.h>
#include<stdlib.h>

int main () {
    int kenar,alan,cevre;
    printf("Karede kenar ve alan hesabı yapan program:");
    printf("Kare kenar uzunluğunu giriniz:");
    scanf("%d",&kenar);
    alan=kenar*kenar;
    cevre=kenar*4;
    printf("Kare alanı: %d",alan);
    printf("Kare çevresi: %d",cevre);
    return 0;       
}