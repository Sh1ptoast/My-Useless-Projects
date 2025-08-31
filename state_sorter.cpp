#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string state[] = {"texas", "iowa", "colorado", "california", "missouri", "newjersey", "montana", "tennessee",
    "arkansas", "virginia", "utah", "southcarolina", "newyork", "minnesota", "nebraska", "northcarolina", "georgia",
    "louisiana", "florida", "wisconsin", "oregon", "washington"};
    
    int size = sizeof(state) / sizeof(state[0]);
    sort (state, state + size);
    
    for (int i = 0; i < size; ++i) {
        cout << state[i] << std::endl;
    }
    return 0;
}
