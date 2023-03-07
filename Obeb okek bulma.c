#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>


int main () {

int i,j;
int x,y;
int xx,yy;
int obeb;
int okek;

 
printf("birinici sayiyi giriniz:");
scanf("%d", &x);
printf("ikinci sayiyi giriniz:");
scanf("%d", &y);

xx=x;
yy=y;

for(i=2;i<=xx;i++)
{
    if(i%2==0)
for(j=2;j<=yy;j++)
{
    if(j%2==0)
 {
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }
 }

obeb=x;
okek=(xx*yy)/x;
}
}
system("color 74");
printf("%d sayisinin obebi %d dir", xx, obeb);
printf("%d sayisinin okeki %d dir", yy, okek);


return 0;
}
