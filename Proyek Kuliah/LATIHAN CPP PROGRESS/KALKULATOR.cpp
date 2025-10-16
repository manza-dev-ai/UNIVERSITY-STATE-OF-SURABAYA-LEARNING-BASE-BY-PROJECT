#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Masukkan angka pertama: ";
    cin >> num1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;

    cout << "Masukkan angka kedua: ";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
            }
            break;
        default:
            cout << "Operator tidak valid." << endl;
            break;
    }

    cin.get();
    cin.get();
    return 0;
}
