#include <iostream>
#include <fstream>

using namespace std;
 int main() {
    
    ofstream output;
    output.open("tes.txt");
    char C = 65;
    while (char(C) <= 'Z') {
    output.put(char(C));
    C++;
    }

    return 0;
}