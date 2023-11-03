#include <stdio.h>
#include <math.h>

int main(void){
    float num1, num2;
    printf("num1="); 
    scanf("%f", &num1);
    printf("num2="); 
    scanf("%f", &num2);

    float a=(num1 + num2)/2;
    float b=sqrt(num1 * num2);
    float c=2/(1/num1 + 1/num2);

    printf("arithmetic mean= %0.2f\n", a);
    printf("geometric mean= %0.2f\n", b);
    printf("harmonic mean= %0.2f\n", c);

    return 0;
}