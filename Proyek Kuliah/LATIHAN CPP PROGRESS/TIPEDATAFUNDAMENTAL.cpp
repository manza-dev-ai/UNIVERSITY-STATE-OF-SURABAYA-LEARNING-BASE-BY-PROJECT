#include <iostream>
#include <string>
#include <limits>

using namespace std;

 int main() {
// Tipe Data bilangan Bulat //
  unsigned int a = 5;
  int b = 3;
  long c = 4;
  short d = 5;
// Tipe Data Bilangan Desimal //
  float e = 1.5;
  double f = 3.5;
// Tipe Data Character //
  char g = 'a';
// Tipe Data Bolean // True/false //
  bool h = true;
  bool i = false;

  cout << a << endl;
  cout << sizeof(a) << " byte" << endl;
  cout << numeric_limits<unsigned int>::max() << " Maksimal Nilai unsigned INT" << endl;
  cout << numeric_limits<unsigned int>::min() << " Minimal Nilai unsigned INT" << endl;

  cout << b << endl;
  cout << sizeof(b) << " byte" << endl;
  cout << numeric_limits<int>::max() << " Maksimal Nilai INT" << endl;
  cout << numeric_limits<int>::min() << " Minimal Nilai INT" << endl;
  
  cin.get();
  return 0;

 }