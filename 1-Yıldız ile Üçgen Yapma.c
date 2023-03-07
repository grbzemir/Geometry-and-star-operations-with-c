#include<stdio.h>
#include<stdlib.h>

int main () {
    int i,j,n=10;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
        printf(" ");
       }
       for(j=1;j<=(i*2-1);j++)
       {
        printf("*");
       }
         printf("\n");
    }
    return 0;
}
