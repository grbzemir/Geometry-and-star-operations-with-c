#include<stdio.h>
#include<stdlib.h>

int main() {

    int i;
    int j;
    int k;

    system("color e0");

    printf(" >> Yildizlarla Sekil Olusturma <<");
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=5;k>=i;k--)
        
            printf("*");
        }
        return 0;
    }