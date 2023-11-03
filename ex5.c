//大きいほうを小さいほうで割る
//余りが正のときのみ処理続行
//余りが0になったらその時点の割る数がgcd

#include <stdio.h>
#include <math.h>

int count = 0; 

int gcd(int x, int y){

    int r;
    while(y != 0){
        r = x % y;
        x = y;
        y = r;
        count ++; 
    }

    return x;
    return count;
}

int main(){

    unsigned long long int a, b;
    printf("1st number="); 
    scanf("%llu", &a); 
    printf("2nd number="); 
    scanf("%llu", &b); //長い長い符号なし整数型

    if (a>b) {
    printf("GCM=%d(%d times division)\n", gcd(a,b), count); 
    printf("LCM=%llu\n", a * b / gcd(a,b));
    }

    else {
    printf("GCM=%d(%d times division)\n", gcd(b,a), count); 
    printf("LCM=%llu\n", a * b / gcd(b,a)); 
    }


    return 0;
}
