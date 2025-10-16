#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan sisi pertama: ";
    cin >> a;
    cout << "Masukkan sisi kedua: ";
    cin >> b;
    cout << "Masukkan sisi ketiga: ";
    cin >> c;

    // Cek apakah memenuhi syarat segitiga
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Jika bisa membentuk segitiga
        if (a == b && b == c) {
            cout << "Segitiga sama sisi" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Segitiga sama kaki" << endl;
        }
        else {
            cout << "Segitiga sembarang" << endl;
        }
    } else {
        cout << "Tidak dapat membentuk segitiga" << endl;
    }

    return 0;
}
