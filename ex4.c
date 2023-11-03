#include <stdio.h>
#include <math.h>

void div_mod(int *a, int *b){
    int num = *a;
    *a = num / *b;
    *b = num % *b;
}

int main(){
    int x;
    int y;
    int *a;
    int *b;
    a = &x;
    b = &y;

    printf("dividend="); scanf("%d", &x);
    printf("dividor="); scanf("%d", &y);

    div_mod(a,b);

    printf("quotient:%d, remainder:%d", *a, *b);

    return 0;
}