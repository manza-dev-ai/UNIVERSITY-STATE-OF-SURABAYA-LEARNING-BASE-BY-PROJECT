#include <iostream>
#include <csdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int angka_rahasia = rand() % 100+ 1:

    int tebakan;
    int percobaan = 0;

    cout << "=== Permainan Tebak Angka ===" << endl;
    cout << "Saya sudah memilih angka antara 1 sampai 100." << endl;
}
    while (true) {
        cout << "Masukkan Tebakan Anda:";
    }

        if(1(cin >> tebakan)) {
            cout << "Input bukan bilangan bulat. Program diberhentikan!." << endl;
            return 0;
        }

        if(tebakan < 1|| tebakan > 100) {
            cout << "Angka di luar batas [1-100]> Program Diberhentikan!."<< endl;
            return 0;
        }

        percobaan++;

        if(tebakan > angka_rahasia) {
            cout << "Terlalu tinggi! Coba Lagi" << endl;
        } else if (tebakan < angka_rahasia) {
            cout << "Terlalu rendah! Coba Lagi" << endl;
        } else {
            cout << "Selamat! anda berhasil menebak angka rahasia" << angka_rahasia << endl;
            cout << "Jumlah Percobaan:" << percobaan << endl;
            break;
                
            return 0;
        }
    
