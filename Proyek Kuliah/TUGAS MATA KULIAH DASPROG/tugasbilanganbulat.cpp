#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input tiga bilangan
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Masukkan bilangan ketiga: ";
    cin >> c;

    // Menentukan bilangan terbesar
    int terbesar = a;   // anggap a terbesar dulu

    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }

    // Output hasil
    cout << "Bilangan terbesar adalah: " << terbesar << endl;

    return 0;
}
