#include<stdio.h>
#include<stdlib.h>

int main () {

    int dairenin_yaricapi;

    float pi=3.14;
    float dairealan,dairecevre;

    printf("Dairenin yaricapini giriniz:");
    scanf("%d",&dairenin_yaricapi);

    dairealan=pi*dairenin_yaricapi*dairenin_yaricapi;
    dairecevre=2*pi*dairenin_yaricapi;

    printf("dairenin alani:%f",dairealan);
    printf("dairenin cevresi:%f",dairecevre);

    return 0;
}