#include<stdio.h>
#include<stdlib.h>

 void dortgen(int kisa,int uzun)
 {
    int i,j;
    for(i=0;i<uzun;i++)
    {
        for(j=0;j<kisa;j++)
        {
            printf("*");
        }
    }
    if (i==0)
    {
        printf("*");
    }
    else if (i==uzun-1)
    {
        printf("*");
    }
    else if (j==0)
    {
        printf("*");
    }
    else if (j==kisa-1)
    {
        printf("*");
    }
    printf("\n");
    }
    int main () {
    int kisa,uzun;
    printf("kisa kenar:");
    scanf("%d",&kisa);
    printf("uzun kenar:");
    scanf("%d",&uzun);
    dortgen(kisa,uzun);
    return 0;
}
