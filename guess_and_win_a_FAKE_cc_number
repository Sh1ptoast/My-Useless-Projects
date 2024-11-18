#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

char par = '"';
double guess;

string generatecc() {
    string ccnum = "";
    for (int i = 0; i < 16; ++i) {
        ccnum += to_string(rand() % 10);
    }
    return ccnum;
}

int main() {
    cout << "Welcome to the guessing game! Guess a number and win a credit card number!" <<endl;
    cout << "Sh1ptoast INC is required by law to state that the " << par << "credit card number" << par;
    cout << " is randomly generated and not real." << endl;
    srand(static_cast<unsigned int>(time(0)));
    cout << "Your guess: ";
    cin >> guess;
    guess = guess;
    if (cin.fail()) {
        cout << "WRONG!!! No credit card for you! What kind of idiot can't guess a number..." << endl;
    } else {
        cout << "Correct! Your credit card number is: " << generatecc() << endl;
        cout << "Remember that Sh1ptoast INC is required by law to state that the " << par << "credit card number" << par;
        cout << " is randomly generated and not real." << endl;
    }
    return 0;
}
