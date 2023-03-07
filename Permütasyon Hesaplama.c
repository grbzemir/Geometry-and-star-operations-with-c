#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// permütasyon hesaplama
// p(n,r) = n! / (n-r)! n!/n-r! = n*(n-1)*(n-2)*...*(n-r+1)

float faktoriyel (int);
float faktoriyel (int sayi)
{
   
   int i;
   int f;
   f=1;
    for(i=1;i<=sayi;i++)
    {
         f=f*i;
    }
    return f;
}

int main()
{


int n,r;
float permutasyon;
system("color 0a");
printf("n sayisini giriniz: ");
scanf("%d",&n);
printf("r sayisini giriniz: ");
scanf("%d",&r);


permutasyon=faktoriyel(n)/faktoriyel(n-r);
printf("permutasyon: %f",permutasyon);
getch();


    return 0;
}