#include<stdio.h>
#include<stdlib.h>


//  Bir üçgenin iç açıları toplamı 180 derecedir.

//  Eşkenar üçgenin bütün açıları 60 derece ve bütün kenar uzunlukları eşittir.

//  Eğer açılar eşit ise bu açıların karşısındaki kenarlar da eşittir.


int main  ()
{
    int a,b,c;

    printf("************\n");
    printf(" Acılarına göre ücgen programı \n");
    printf("************\n");
    system("color 0a");

    printf("1. aciyi giriniz: ");
    scanf("%d",&a);

    printf("2. aciyi giriniz: ");
    scanf("%d",&b);

    printf("3. aciyi giriniz: ");
    scanf("%d",&c);

    if(a+b+c == 180 )
    {
        printf("bu bir ucgendir \n");
    }
    if(a+b+c != 180 )
    {
        printf("bu bir ucgen degildir \n");
    }
    if(a==b && b==c)
    {
        printf("bu bir eskenar ucgendir \n");
    }
    else if (a==b)
    {
        printf("bu bir ikizkenar ucgendir \n");
    }
    else if (a==c)
    {
        printf("bu bir ikizkenar ucgendir \n");
    }
    else if (b==c)
    {
        printf("bu bir ikizkenar ucgendir \n");
    }
    else
    {
        printf("bu bir cesitkenar ucgendir \n");
    }



    return 0;
}