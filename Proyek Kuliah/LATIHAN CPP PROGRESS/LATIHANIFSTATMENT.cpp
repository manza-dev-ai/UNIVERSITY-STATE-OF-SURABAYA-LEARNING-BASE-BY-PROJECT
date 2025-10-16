#include <iostream>
#include <string>

using namespace std;
  int main () {

    int a;
    cout << "===PROGRAM STATEMENT===" << endl;
    cout << "MASUKAN NILAI ANDA= ";
    cin >> a;
    cout << "NILAI ANDA= " << a << endl;
    
    if (a < 10) {
        cout << "NILAI YANG ANDA MASUKKAN BENAR" << endl;
    } else if (a >=10) {
        cout << "NILAI TERLALU TINGGI" << endl;
    } 
    cout << "===SELESAI===" << endl;
    cin.get();
    return 0;

    }
  