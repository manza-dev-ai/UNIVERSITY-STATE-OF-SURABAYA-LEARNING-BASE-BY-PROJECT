#include <iostream>
using namespace std;

int main() {
    int n;
    long long faktorial = 1; // gunakan long long agar bisa menampung hasil besar

    cout << "Masukkan bilangan bulat: ";
    cin >> n;

    if (n < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            faktorial *= i;
        }

        cout << "Faktorial dari " << n << " adalah: " << faktorial << endl;
    }

    return 0;
}
