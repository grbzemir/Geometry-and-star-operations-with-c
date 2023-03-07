#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main (void)
{

int cevap;
float x,r,h,taban,yukseklik,alan,PI=3.14;


do 

{

system("color 0a");
printf("Sekillerde alan hesabi yapma programina hosgeldiniz \n");
printf("1. Karenin alanini hesapla\n");
printf("2. Dairenin alani hesapla \n");
printf("3. Ucgenin alani hesapla  \n");
printf("4. Cikis \n");
printf("Seciminizi giriniz: ");
scanf("%d",&cevap);




switch(cevap)
{
    case 1:
    printf("Karenin bir kenarini giriniz: ");
    scanf("%f",&x);
    alan=x*x;
    printf("Karenin alani: %f",alan);
    break;

    case 2:
    printf("Dairenin yaricapini giriniz: n");
    scanf("%f",&r);
    alan=PI*r*r;
    printf("Dairenin alani: %.2fn",alan);
    break;

    case 3:
    printf("Ucgenin tabanini giriniz: ");
    scanf("%f",&taban);
    printf("Ucgenin yuksekligini giriniz: ");
    scanf("%f",&yukseklik);
    alan=(taban*yukseklik)/2;
    printf("Ucgenin alani: %.2fn",alan);
    break;

    case 4: 
    printf("Cikis yapiliyor...");
    break;

}
}
while(cevap!=3);

return (0);
}






