#include <stdio.h>
#include <math.h>
#include <string.h>

#define NUMBER 3
#define NAME_LEN 64

void swap_double(double *x, double *y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

void swap_str(char *sx, char *sy) {
    char temp[NAME_LEN];

    strcpy(temp, sx);
    strcpy(sx, sy);
    strcpy(sy, temp);
}

void sort(double num[], char str[][NAME_LEN], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = n-1; j > i; j--) {
            if (num[j-1] < num[j]) {
                swap_double(&num[j-1], &num[j]);
                swap_str(str[j-1], str[j]);
            }
        }
    }
}

int main() {
    double height[] = {162.2, 164.6, 168.3};
    double weight[] = {53.2, 56.2, 62.0};
    char name[][NAME_LEN] = {"A", "B", "C"};

    sort(height, name, NUMBER);

    for (int i = 0; i < NUMBER; i++) {
        printf("%s %.1f %.1f\n", name[i], height[i], weight[i]);
    }

    return 0;
}