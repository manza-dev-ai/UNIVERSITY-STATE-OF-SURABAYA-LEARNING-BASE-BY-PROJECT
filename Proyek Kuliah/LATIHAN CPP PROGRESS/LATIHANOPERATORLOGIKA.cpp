#include <iostream>
#include <string>

using namespace std;

int main() {

    int a = 5;
    int b = 7;
    bool hasil1, hasil2, hasil3;
    // simbol
    // <,>,==,!=,>=,<=
    // not = !
    // and = and,&&
    // or = ||

    //operator logika : not , and , or //
    //not
   hasil1 = !(a == 5);//not
   //and kedua nilai harus benar untuk menghasilkan true
   hasil2 = (a == 5) and (b == 7);// and
   //or jika salah satu true maka true
   hasil3 = (a == 5) || (b == 8);// or

   cout << hasil1 << " False" << endl;
   cout << hasil2 << " True" << endl;
   cout << hasil3 << " True" << endl;


   cin.get();
   return 0;
}