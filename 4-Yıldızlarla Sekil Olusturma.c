#include<stdio.h>
#include<stdlib.h>

int main() {
    int en,boy,i,j;
    system("color e0");
    printf(" >> Yildizlarla Sekil Olusturma <<");
    printf("\n\n En:");
    scanf("%d",&en);
    printf("\n\n boy:");
    scanf("%d",&boy);

    for(i=1;i<=en;i++)
    {
        for(j=1;j<=boy;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     return 0;
}
