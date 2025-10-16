#include <iostream>
#include <string>
#include <limits>
 using namespace std;

 int main() {
    //Tipe Data //
    unsigned int a = 1;
    int b = 2;
    long c = 3;
    short d = 4;
    // Desimal //
    float e = 1.5;
    double f = 2.5;
    // character //
    char g = 'a';
    // bolean // true/false
    bool h = true;
    bool i = false;
    
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<unsigned int>::max() << " Byte" << endl;
    cout << numeric_limits<unsigned int>::min() << " Byte" << endl;

    cout << b << endl;
    cout << sizeof(b) << " byte" << endl;
    cout << numeric_limits<int>::max() << " Byte" << endl;
    cout << numeric_limits<int>::min() << " Byte" << endl;

    cout << c << endl;
    cout << sizeof(c)<< " byte" << endl;
    cout << numeric_limits<long>::max() << " byte" << endl;
    cout << numeric_limits<long>::min() << " byte" << endl;

    cout << d << endl;
    cout << sizeof(d)<< " byte" << endl;
    cout << numeric_limits<short>::max() << " byte" << endl;
    cout << numeric_limits<short>::min() << " byte" << endl;

    cout << e << endl;
    cout << sizeof(e) << " byte" << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << endl;

    cout << f << endl;
    cout << sizeof(e)<< " byte"<< endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl;

    cout << g << endl;
    cout << sizeof(g) << " byte" << endl;
    cout << numeric_limits<char>::max()<< endl;
    cout << numeric_limits<char>::min() << endl;

    cout << h << endl;
    cout << sizeof(h) << " byte" << endl;
    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl;

    cout << i << endl;
    cout << sizeof(i) << " byte" <<endl;
    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl;
    

    cin.get();
    return 0;
 }