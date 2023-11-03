#include <iostream>
#include <string>
#include <math.h>
#include <bitset>
using namespace std;

int main() {
    FILE *fp;
    fp = fopen("data9_wakimoto_r.dat", "w");

    for (int command_value = 0; command_value <= 255; command_value++) {
        double t = static_cast<double>(command_value); // tを0から255までの整数とする

        double T;
        double V;

        T = 7 * (t / 255.0 * 5 - 2.5) * (t / 255.0 * 5 - 2.5) - 15;
        if (T > 20) {
            T -= 20;
            T /= 2;
            V = T;
        }
        else if (T > 10 && T < 20) {
            T -= 10;
            T /= 2;
            V = T;
        }
        else if (T < -10) {
            T += 10;
            T /= 2;
            V = T;
        }

        // 8ビットのバイナリに変換して出力
        bitset<8> binary_command_value(command_value);
        cout << V << " " << binary_command_value << endl;

        fprintf(fp, "%lf %s\n", V, binary_command_value.to_string().c_str());
    }

    fclose(fp);

    return 0;
}