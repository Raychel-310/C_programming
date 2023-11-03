#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    // パラメータ
    const double samplingTime = 0.001; // サンプリングタイム
    const double endTime = 10.0;       // 計算終了時間

    FILE *fp;
    fp = fopen("data11_wakimoto_r.dat", "w");

    // 初期条件
    double t = 0.0;
    double theta = sin(t) + 0.0000001 * sin(1000000 * t);
    double prevTheta = theta; //前のステップでのθをprevとした
    double thetaDot;

    while (t <= endTime) {
        // θを計算
        t += samplingTime;
        theta = sin(t) + 0.0000001 * sin(1000000 * t);

        // θの時間微分を計算
        thetaDot = (theta - prevTheta) / samplingTime;

        fprintf(fp, "%lf %lf\n", t, thetaDot);

        prevTheta = theta;
    }

    fclose(fp);
    return 0;
}
