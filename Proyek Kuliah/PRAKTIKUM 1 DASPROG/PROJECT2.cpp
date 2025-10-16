#include <iostream>
#include <string>
using namespace std;

//Fungsi untuk menghitung rata-rata nilai 
double hitungRataRata(float tugas, float uts, float uas) {
    return(tugas + uts + uas) / 3.0;
}

// Fungsi untuk menentukan grade
char tentukanGrade(double rata) {
    if (rata >= 85) return 'A';
    else if (rata >= 70) return 'B';
    else if (rata >= 55) return 'C';
    else if (rata >= 40) return 'D';
    else return 'E';
}   

int main() {
    int jumlahMahasiswa;
    string nama;
    float tugas, uts, uas;
    double rata;
    char grade;
    char ulang;

    cout << "=== Program Kalkulator Nilai Mahasiswa ===" <<endl;

    do {
        cout << "\nMasukan jumlah mahasiswa: ";
        cin >> jumlahMahasiswa;

        for (int i = 1; i <=jumlahMahasiswa; i++) {
            cout << "\nData Mahasiswa ke-" << i << endl;
            cout << "Nama: ";
            cin >> tugas;
            cout << "Nilai UTS: ";
            cin >> uts;
            cout << "Nilai UAS: ";
            cin >> uas;

            rata = hitungRataRata(tugas, uts, uas);
            grade = tentukanGrade(rata);
            
            cout << "\nHasil untuk " << nama << ":" << endl;
            cout << "Rata-rata: " << rata << endl;
            cout << "Grade: " << grade << endl;
        }

        cout << "\nApakah ingin mengulang program? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih telah menggunakan program ini!" << endl;
    return 0;
}

    
}