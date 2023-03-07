#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// ax^2+bx+c şeklindeki denkelimin kodlanmış hali

int main () {

    int a,b,c;
    double delta;
    double x1,x2;
    printf("denkelmin a degerini giriniz:");
    scanf("%d",&a);
    printf("denkelmin b degerini giriniz:");
    scanf("%d",&b);
    printf("denkelmin c degerini giriniz:");
    scanf("%d",&c);
    delta=pow(b,2)-4*a*c;             //delta=b*b-4*a*c;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("denklemin 1.ci kökü:%f",x1);
    printf("denklemin 2.ci kökü:%f",x2);
    return 0;
}

