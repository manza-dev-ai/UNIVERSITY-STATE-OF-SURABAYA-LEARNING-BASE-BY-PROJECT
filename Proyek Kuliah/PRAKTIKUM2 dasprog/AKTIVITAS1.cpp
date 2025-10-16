#include <iostream>
using namespace std;

int main() {
    double angka;
    int hitung = 0;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    cout << "\nHasil pembagian berturut-turut:\n";

    // Perulangan pembagian
    while (angka >= 1) {
        cout << "Hasil ke-" << hitung << ": " << angka << endl;
        angka = angka / 2;   // bagi dua
        hitung++;            // tambahkan penghitung
    }

    cout << "\nJumlah pembagian hingga kurang dari 1: " << hitung << " kali." << endl;

    return 0;
}
