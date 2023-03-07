#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int bolunen(int x)
{
    int i;
    i=2;

while(i<x+1)
{

    if(i%3==0)
    {
        printf("%d ", i);
    }
    i++;
}

}
int main () {

   int x;

   system("color 0a");
   printf("lütfen bir sayi giriniz: \n");
   scanf("%d", &x);

     bolunen(x);

     return 0;
}
