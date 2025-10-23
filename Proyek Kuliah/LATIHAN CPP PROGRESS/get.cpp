#include <iostream>
#include <fstream>

using namespace std;
 int main() {
    
    ifstream input;
    input.open("test.txt");

    char C;
    while(input){
        input.get(C);
        if (input)
            cout << C;

            return 0;
    }


 }
