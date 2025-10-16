#include <iostream>
using namespace std;

int main() {
    int batas;

    cout << "Masukkan batas angka: ";
    cin >> batas;

    cout << "\nHasil FizzBuzz dari 1 sampai " << batas << ":\n";

    for (int i = 1; i <= batas; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } 
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } 
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } 
        else {
            cout << i << endl;
        }
    }

    return 0;
}
