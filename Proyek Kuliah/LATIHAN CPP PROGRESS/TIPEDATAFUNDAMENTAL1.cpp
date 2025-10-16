#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    // Tipe Data Bilangan Bulat //
    unsigned int a = 8;
    int b = 5;
    long c = 7;
    short d = 2;
    // Tipe Data Bilangan Desimal //
    float e = 1.0;
    double f = 2.5;
    // Tipe Data Character //
    char g = 'a';
    // Tipe Data Boolean // True/false //
    bool h = true;
    bool i = false; 

    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<unsigned int>::max() << " Maksimal Nilai BITE Unsigned INT" << endl;
    cout << numeric_limits<unsigned int>::min() << " Minimal Nilai BITE Unsigned INT" << endl;
    
    cout << b << endl;
    cout << sizeof(b) << " byte" << endl;
    cout << numeric_limits<int>::max() << " Maksimal Nilai INT" << endl;
    cout << numeric_limits<int>::min() << " Minimal Nilai INT" << endl;

    cout << c << endl;
    cout << sizeof(c) << endl;
    cout << numeric_limits<long>::max() << " Maksimal Nilai LONG" << endl;
    cout << numeric_limits<long>::min() << " Minimal Nilai LONG" << endl;

    cout << d << endl;
    cout << sizeof(d) << endl;
    cout << numeric_limits<short>::max() << " Maksimal Nilai SHORT" << endl;
    cout << numeric_limits<short>::min() << " Minimal Nilai SHORT" << endl;

    cout << e << endl;
    cout << sizeof(e) << endl;
    cout << numeric_limits<float>::max() << " Maksimal Nilai Float" << endl;
    cout << numeric_limits<float>::min() << " Minimal Nilai Float" << endl;

    cout << f << endl;
    cout << sizeof(f) << endl;
    cout << numeric_limits<double>::max() << " Maksimal Nilai Double" << endl;
    cout << numeric_limits<double>::min() << " Minimal Nilai Double" << endl;

    cout << g << endl;
    cout << sizeof(g) << endl;
    cout << numeric_limits<char>::max << " Maksimal Nilai Char" << endl;
    cout << numeric_limits<char>::min << " Minimal Nilai Char" << endl;

    cout << h << endl;
    cout << sizeof(h) << endl;
    cout << numeric_limits<bool>::max << " Maksimal Nilai Bolean" << endl;
    cout << numeric_limits<bool>::min << " Minimal Nilai Bolean" << endl;

    cout << i << endl;
    cout << sizeof(i) << endl;
    cout << numeric_limits<bool>::max << " Maksimal Nilai Bolean" << endl;
    cout << numeric_limits<bool>::min << " Minimal Nilai Bolean " << endl;  

    cin.get();
    return 0;



}