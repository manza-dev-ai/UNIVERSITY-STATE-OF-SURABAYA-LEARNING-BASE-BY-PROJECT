#include <iostream>
#include <string>
 using namespace std;
  int main() {
    int a = 10;
    int b = 5;

    int hasil1,hasil2,hasil3,hasil4,hasil5;
 // SIMBOL ARITMATIKA +,-,/,*,% //
    cout << "===PERMAINAN ARITMATIKA===" << endl;
//Pertambahan dan mengulang //
    hasil1 = (a - b);
    hasil2 = (a + b);
    cout << a << "-" << b << "=" << hasil1 << endl;
    cout << a << "+" << b << "=" << hasil2 << endl;
//Pembagian Dan Perkalian //
    hasil3 = (a / b);
    hasil4 = (a * b);
    cout << a << "/" << b << "=" << hasil3 << endl;
    cout << a << "*" << b << "=" << hasil4 << endl;
//MODULUS //
    hasil5 = (a % b);
    cout << a << "%" << b << endl;
// SELESAI //
    cout << "===SELESAI===" << endl;

    cin.get();
    return 0;
  }