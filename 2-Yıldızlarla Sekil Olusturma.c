#include<stdio.h>
#include<stdlib.h>

int main () {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }


    int main () {
        printf("Tersten Yıldızlarla Üçgen Çizme\n");
        int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=5;j>=i;j--)
            {
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
