#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () 
{
    
    // girilen n tane sayinin teklerini ve ciftlerini toplayan program

    int n;

    int tektoplam=0;
    int cifttoplam=0;

    system("color 0a");
    
    printf("lütfen n değerini giriniz:");
    scanf("%d",&n);

    int i;
    for(i=0;i<n;i++)
    {
        int sayi;
        printf("lütfen bir sayi giriniz:");
        scanf("%d",&sayi);

        if(sayi%2==0)
        {
            printf("sayi cifttir");
        }
        else
        {
            printf("sayi tektir");
        }
    }
    printf("çift sayilarin toplami: %d\n",cifttoplam);
    printf("tek sayilarin toplami: %d\n",tektoplam);

    return 0;
}