#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>


// ikinci dereceden denklem kodu
// ax^2+bx+c=0
// delta=b^2-4ac
// delta = 0 çakışık ise kök var
// delta > 0 ise 2 kök vardır
// delta < 0 ise kök yoktur


int main ()
{


float a,b,c,delta,x1,x2,x;
system("color 0a");
printf("a degerini giriniz: ");
scanf("%f",&a);
printf("b degerini giriniz: ");
scanf("%f",&b);
printf("c degerini giriniz: ");
scanf("%f",&c);

if(a==0)
printf("a = 0 olamaz ! \n");
else
{
    delta = b*b-4*a*c;
    if(delta==0)
{
    x=-b-(sqrt(delta))/(2*a);
    printf("denklemin tek cakisik koku vardir: %f",x);
    printf("x = %.2f\n",x);
}
else if (delta > 0)
{
    x1=(-b-(sqrt(delta)))/(2*a);
    x2=(-b+(sqrt(delta)))/(2*a);

    printf("denklemin 2 farkli koku vardir: \n");
    printf("x1 = %.2f\n",x1);
    printf("x2 = %.2f\n",x2);

   printf("koklerin toplami: %.2f\n",-b/a);
   printf("koklerin carpimi: %.2f\n",c/a);
   printf("koklerin farki: %.2f\n",sqrt(delta)/(abs(a)));


}

else 
printf("denklemin reel koku yoktur\n");
}

    return 0;
}