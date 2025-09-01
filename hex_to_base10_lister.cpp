#include <iostream>
#include <string>
#include<cmath>
using namespace std;

// this code is meant to be used to translate hex and base 10
// it only looks good up to five rows tho

int main() {
    int input;
    cout << "rows: ";
    cin >> input;
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    for (int i = input; i > 0; --i) {
        cout << "\n#" << i << ": ";
        for (int j = 0; j < 16; ++j) {
            cout << hex[j] << " = " << j * pow(16, (i - 1)) << "  ";
        }
    }
    return 0;
}
