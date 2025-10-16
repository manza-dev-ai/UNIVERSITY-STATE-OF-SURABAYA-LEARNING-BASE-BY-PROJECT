#include <iostream>
using namespace std;

int main() {
    int totalRumah;

    cout << "Berapa jumlah total rumah di komplek? ";
    cin >> totalRumah;

    cout << "\nNomor rumah ganjil di komplek Graha Koding:" << endl;

    // Perulangan dari 1 sampai total rumah
    for (int i = 1; i <= totalRumah; i++) {
        if (i % 2 != 0) { // jika ganjil
            cout << "Rumah nomor: " << i << endl;
        }
    }

    return 0;
}
