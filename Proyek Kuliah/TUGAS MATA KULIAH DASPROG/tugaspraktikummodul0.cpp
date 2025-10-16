#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variabel data diri
    string namaLengkap, kelas, nim, tanggalLahir;
    char jenisKelamin;
    int tahunLahir, tahunSekarang = 2025; // misal sekarang tahun 2025
    int usia;

    // Input data
    cout << "=== Program Informasi Data Diri ===" << endl;
    cout << "Masukkan Nama Lengkap   : ";
    getline(cin, namaLengkap);

    cout << "Masukkan Kelas          : ";
    getline(cin, kelas);

    cout << "Masukkan NIM            : ";
    getline(cin, nim);

    cout << "Masukkan Jenis Kelamin (L/P) : ";
    cin >> jenisKelamin;

    cin.ignore(); // membersihkan buffer agar getline berikutnya aman
    cout << "Masukkan Tanggal Lahir (dd-mm-yyyy) : ";
    getline(cin, tanggalLahir);

    cout << "Masukkan Tahun Lahir    : ";
    cin >> tahunLahir;

    // Hitung usia
    usia = tahunSekarang - tahunLahir;

    // Output data diri
    cout << "\n=== Informasi Data Diri Anda ===" << endl;
    cout << "Nama Lengkap   : " << namaLengkap << endl;
    cout << "Kelas          : " << kelas << endl;
    cout << "NIM            : " << nim << endl;
    cout << "Jenis Kelamin  : " << jenisKelamin << endl;
    cout << "Tanggal Lahir  : " << tanggalLahir << endl;
    cout << "Tahun Lahir    : " << tahunLahir << endl;
    cout << "Usia Saat Ini  : " << usia << " tahun" << endl;

    return 0;
}
