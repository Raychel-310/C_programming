#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <string.h>

int main() {
    double V = 5.0;
    double R = 10.0*1000;
    double C = 0.00001;
    double dt = 0.001;

    FILE *fp;
    fp = fopen("data7_wakimoto_r.dat", "w");

    double v = 0;
    for (double t = 0; t <= 1.0; t+=dt) {
        double i = (V - v)/R;
        v += (1.0 / C) * i * dt;

        fprintf(fp, "%lf %lf %lf\n", t, v, i);
    }

    fclose(fp);

    return 0;
}