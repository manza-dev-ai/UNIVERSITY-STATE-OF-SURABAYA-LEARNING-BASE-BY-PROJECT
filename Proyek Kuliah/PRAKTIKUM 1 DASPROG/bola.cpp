#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const double gravitasi = 9.81;
const double dt = 0.01;
const double y_bawah = 0.0;
const double elatisitas = 1.0;
const double waktu = 20.0;
const double x = 5.0;

int main() {
    double y = 50.0;
    double vy = 0.0;
    double t_0 = 0.0;

    ofstream output("posisibola.txt");
    output << fixed << setprecision(10);

    while (t_0 <= waktu) {
        output << x << "," << y << endl;

        vy -= gravitasi * dt;
        y += vy * dt;

        if (y <= y_bawah) {
            y = y_bawah;
            vy = -vy * elatisitas;
        }

        t_0 += dt;
    }

    output.close();
    return 0;
}
