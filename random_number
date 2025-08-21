#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Welcome! Your random number is..." << endl;
    srand(static_cast<unsigned int>(time(0)));
    int randn = rand() % 101; // creates a random number (unrelated)
    this_thread::sleep_for(chrono::seconds(1)); // for suspense
    cout << "." << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "." << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "." << endl;
    this_thread::sleep_for(chrono::seconds(1));
    randn = 4; // the number I chose randomly :3
    cout << randn << "!";
    return 0;
}
