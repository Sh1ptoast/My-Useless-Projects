#include <iostream>
#include <vector>
using namespace std;

int main() {
    int dividend_num;
    int current_dividend;
    
    cout << "How many dividends do you want?\nNumber of dividends: ";
    cin >> dividend_num;
    
    vector<double> dividend(dividend_num);
    
    for (int i = 0; i < dividend_num; ++i) { // 0-3
        cout << "Dividend "<< (i + 1) << ": ";
        cin >> current_dividend;
        dividend[i] = current_dividend;
    }
    
    // just for testing
    for (int test = 0; test < dividend_num; ++test) {
        cout << dividend[test];
        if (test < (dividend_num - 1)) {
            cout << ", ";
        }
    }
}
