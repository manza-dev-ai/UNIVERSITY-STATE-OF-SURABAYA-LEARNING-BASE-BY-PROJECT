#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    cout << "\nPola segitiga siku-siku:\n";

    // Loop luar untuk baris
    for (int i = 1; i <= tinggi; i++) {
        // Loop dalam untuk kolom (jumlah '#' tiap baris)
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << endl; // pindah ke baris baru
    }

    return 0;
}
