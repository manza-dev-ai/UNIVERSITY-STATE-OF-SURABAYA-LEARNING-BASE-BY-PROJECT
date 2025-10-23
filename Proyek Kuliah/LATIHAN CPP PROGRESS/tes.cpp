#include <iostream>
#include <fstream>

using namespace std;
 int main() {
    
    ofstream keluaran;
    keluaran.open("coba.txt");
    
    keluaran << "ini output program" << endl;
    keluaran << 3 + 5 << endl;

    keluaran.close();

    return 0;


 }