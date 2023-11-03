#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0
#define NUM 300

double triangle(double r)
{
    double a;
    if (r < 0) {
        r += 2 * M_PI;
    }
    r = fmod(r, 2 * M_PI);
    a = (r / M_PI) * 10.0; // aの計算を変更
    if (a > 10.0) {
        a = 20.0 - a;
    }
    return a;
}

int main(void)
{
    FILE *fp;
    fp = fopen("data12_wakimoto_r.dat", "w");
    int i;
    double r, dr, a;

    dr = M_PI / NUM;
    for (r = -2 * M_PI; r < 4 * M_PI; r += dr) {
        a = triangle(r);
        fprintf(fp, "%6.3f, %6.3f\n", r, a);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}