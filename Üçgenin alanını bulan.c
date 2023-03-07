#include<stdio.h>
#include<stdlib.h>

int main () {
    int taban,yükseklik;
    float alan;

    printf("üçgenin tabanini giriniz:");
    scanf("%d",&taban);
    printf("üçgenin yüksekligini giriniz:");
    scanf("%d",&yükseklik);

    alan=(taban*yükseklik)/2;
    printf("üçgenin alani:%f",alan);

    if(alan>100)
    {
        printf("üçgenin alani 100'den büyüktür");
    }
    else
    {
        printf("üçgenin alani 100'den küçüktür");
    }
    return 0;
}