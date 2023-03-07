#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int main () {

int sayi;
int yildiz;
int bosluk;
int i;
int j;

system("color 0a");
printf("lütfen bir sayi giriniz: \n");
scanf("%d", &sayi);
yildiz=1;
bosluk=sayi-1;

for(i=1;i<=sayi;i++)
{
    for(j=1;j<=bosluk;j++)
    {
        printf(" ");
    }
    for(j=1;j<=yildiz;j++)
    {
        printf("*");
    }
    
    bosluk--;
    yildiz=yildiz+2;
    printf("\n");
}
yildiz-=4;

for(i=1;i<sayi;i++)
{
    for(j=1;j<=i;j++)
    {
        printf(" ");
    }
    for(j=1;j<=yildiz;j++)
    {
        printf("*");
    }
    yildiz-=2;
    printf("\n");
}
return 0;
}