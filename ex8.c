#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <string.h>

int x;
int pulse(double time) {
    int x;
    const int a=80000, rsl=0x10000;
    const double pi=3.1416;

    x=a*sin(2.0*pi/10.0*time);
    if (x>rsl-1) x-=rsl;

    return x;
}

int inbu(double time) {
    int x;

    x=pulse(time) & 0xFF00;
    x>>=8;

    return x;
}

int inbl(double time) {
    return (pulse(time) & 0x00FF);
}

int main() {
    double time;
    double num;
    double dt = 0.001;

    FILE *fp;
    fp = fopen("data8_wakimoto_r.dat", "w");

    for (double t = 0; t <= 5.0; t+=dt) {
        num = 100000000*x & 0xFF00+ pulse(time) & 0x00FF;
        fprintf(fp, "%lf %lf\n", t, num);
    }

    fclose(fp);

    return 0;
}