#include <stdio.h>
#include <math.h>

int main(){
    float height[10];
    height[0] = 162.2;
    height[1] = 164.6;
    height[2] = 168.3;
    height[3] = 170.5;
    height[4] = 150.5;
    height[5] = 168.4;
    height[6] = 160.6;
    height[7] = 172.9;
    height[8] = 155.1;
    height[9] = 163.7;

    float weight[10];
    weight[0] = 53.2;
    weight[1] = 56.2;
    weight[2] = 62.0;
    weight[3] = 56.4;
    weight[4] = 48.9;
    weight[5] = 58.0;
    weight[6] = 50.6;
    weight[7] = 68.3;
    weight[8] = 50.1;
    weight[9] = 53.9;

    float height_sum = 0;
    printf("height\n");
    for (int i = 0; i<10; i++){
        height_sum += height[i];
    }

    printf("average value=%0.2f\n", height_sum/10);

    float height_square_sum = 0;
    for (int i = 0; i<10; i++){
        height_square_sum += pow(height[i], 2.0);
    }

    printf("variance=%0.2f\n", height_square_sum/10-pow(height_sum/10, 2.0));
    printf("standard deviation=%0.2f\n", sqrt(height_square_sum/10-pow(height_sum/10, 2.0)));

    float weight_sum = 0;
    printf("weight\n");
    for (int i = 0; i<10; i++){
        weight_sum += weight[i];
    }

    printf("average value=%0.2f\n", weight_sum/10);

    float weight_square_sum = 0;
    for (int i = 0; i<10; i++){
        weight_square_sum += pow(weight[i], 2.0);
    }

    printf("variance=%0.2f\n", weight_square_sum/10-pow(weight_sum/10, 2.0));
    printf("standard deviation=%0.2f\n", sqrt(weight_square_sum/10-pow(weight_sum/10, 2.0)));

    float height_weight_square_sum = 0;
    for (int i = 0; i<10; i++){
        height_weight_square_sum += height[i]*weight[i];
    }

    printf("covariance=%0.2f\n", height_weight_square_sum/10 - height_sum/10 * weight_sum/10);
    printf("correlation coefficient=%0.2f\n", (height_weight_square_sum/10 - height_sum/10 * weight_sum/10)/(sqrt(height_square_sum/10-pow(height_sum/10, 2.0))*sqrt(weight_square_sum/10-pow(weight_sum/10, 2.0))));

    return 0;
}