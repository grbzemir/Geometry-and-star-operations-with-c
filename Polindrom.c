#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

int sayi;
printf("lütfen bir sayi giriniz:");
scanf("%d",&sayi);

int temp=sayi;
int tersi=0;

while ( temp!=0)
{
    tersi=tersi*10;
    tersi=tersi+temp%10;
    temp=temp/10;
}

if (sayi==tersi)
{
    printf("sayi palindromdur");
}
else
{
    printf("sayi palindrom degildir");
}


return 0;
}
