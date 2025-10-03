#include <iostream>
#include <vector>
using namespace std;

// This code is meant to find the number (1-10) that's the closest to a divisor

int main() {
    int dividend_num; // number of dividends
    
    cout << "How many dividends do you want?\nNumber of dividends: ";
    cin >> dividend_num;
    
    // storage for the dividends
    vector<double> dividend(dividend_num);
    
    // filling the vector
    for (int i = 0; i < dividend_num; ++i) { // 0-3
        cout << "Dividend "<< (i + 1) << ": ";
        cin >> dividend[i];
    }
    
    // TODO: dividing by 1-dn, finding the closest divisor (average), outputting it and the quotient and the average remainder
    
    
    
    // just for testing
    for (int test = 0; test < dividend_num; ++test) {
        cout << dividend[test];
        if (test < (dividend_num - 1)) {
            cout << ", ";
        }
    }
}
