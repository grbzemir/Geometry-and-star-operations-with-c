#include<stdio.h>
#include<stdlib.h>

int kubpul(int sayi)
{
    int sonuc=sayi*sayi*sayi;
    return sonuc;
}
int main () {
    
    int s;
    printf("küpünü bulmak istediğiniz sayisini giriniz:");
    scanf("%d",&s);
    kubpul(s);
    printf("küpü:%d",kubpul(s));
    return 0;
}
