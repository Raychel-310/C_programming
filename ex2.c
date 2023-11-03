#include <stdio.h>
#include <math.h>

int main(){
    float a;
    float b;
    float c;
    float Hero;
    float s;

    printf("a="); scanf("%f", &a);
    printf("b="); scanf("%f", &b);
    printf("c="); scanf("%f", &c);

    s=(a+b+c)/2;
    Hero=sqrt(s*(s-a)*(s-b)*(s-c));

    if (a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b) printf("S=%0.2f\n", Hero);
    else printf("Impossible!");

    return 0;
}