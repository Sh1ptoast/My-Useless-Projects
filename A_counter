#include <iostream>
#include <string>
using namespace std;

int acount(const string& str) { // counts the A's
    int anum = 0; // anum = "A" number
    for (char a : str) { // loops over the input
                if (a == 'A' || a == 'a') { // checks for A's
            anum ++; //adds one to the number
        }
    } return anum;
}

int main() {
    string in; // makes a string for cin to feed into
    cout << "Welcome to the A counter! It will tell you how many A's you have. Just enter some text." << endl;
    cout << "Your text: ";
    cin >> in;
    int num = acount(in); // puts the number of A's into "num"
    cout << "The number of A's is: " << num << endl; // outputs the number
    return 0;
}
