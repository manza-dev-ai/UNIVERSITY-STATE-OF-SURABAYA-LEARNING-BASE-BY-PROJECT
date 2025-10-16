#include <iostream>
using namespace std;

int main() {
    int batas;

    cout << "Masukkan angka batas: ";
    cin >> batas;

    cout << "\nBilangan prima dari 1 sampai " << batas << " adalah: " << endl;

    // Perulangan dari 2 sampai batas
    for (int i = 2; i <= batas; i++) {
        bool prima = true; // asumsi awal bahwa i adalah prima

        // Cek apakah i punya pembagi selain 1 dan dirinya sendiri
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prima = false;
                break; // jika sudah ketemu pembagi, tidak perlu lanjut
            }
        }

        if (prima)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}
