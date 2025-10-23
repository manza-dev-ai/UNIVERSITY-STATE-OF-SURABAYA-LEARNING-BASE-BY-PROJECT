#include <iostream>
#include <string>

 using namespace std;
   int main() {
     int a = 2;
     int b = 3;

     bool hasil1,hasil2,hasil3,hasil4,hasil5,hasil6;
     // SAMA DENGAN //
     hasil1 = (a == b);
     // TIDAK SAMA DENGAN //
     hasil2 = (a != b);
     // Kurang Dari //
     hasil3 = (a < b );
     // Lebih Dari //
     hasil4 = (a > b );
     // Kurang Dari Sama Dengan //
     hasil5 = (a <= b);
     // Lebih Dari Sama Dengan //
     hasil6 = (a >= b);
     
     cout << "a" << "=" << "b" << "=" << hasil1 << " FALSE" << endl;
     cout << "a" << "!=" << "b" << "=" << hasil2 << " TRUE" << endl;
     cout << "a" << "<" << "b" << "=" << hasil3 << " TRUE" << endl;
     cout << "a" << ">" << "b" << "=" << hasil4 << " FALSE" << endl;
     cout << "a" << "<=" << "b" << "=" << hasil5 << " TRUE" << endl;
     cout << "a" << ">=" << "b" << "=" << hasil6 << " FALSE" << endl;

     cin.get();
     return 0;

   }
