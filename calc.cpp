#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    while (true) {
        while (choice == 0) {
            cout << "Welcome to the calculator app! choose what you want to see.\n" <<
            "1. addition\n2. subtraction\n3. multiplication\n4. division (no remainder)\n5. factorials\n6. exit\n\n" <<
            "Your choice: ";
            cin >> choice;
            cout << "\n";
        }
        
        while (choice == 1) {
            
        }
        while (choice == 2) {
            
        }
        while (choice == 5) {
            int factorial = 1; // result
            int fInput = 0; // input
            
            cout << "Welcome to the factorial calculator! Type what number you want to be factorialed, type 0 to leave.\n"<< "Factorial: ";
            cin >> fInput;
            
            if (fInput == 0) { // exit
                cout << "\n\n";
                choice = 0;
            }
            if (fInput < 0) {
                cout << "error\n\n";
                choice = 0;
            }
            if (choice != 0) {
                for (fInput; fInput > 1; --fInput) { // does the math
                    factorial = factorial * fInput;
                }
                cout << factorial << "\n";
            }
        }
        if (choice == 6) {
            cout << "Byeeeeeee :3 :3 :3";
            break;
        }
    }

    return 0;
}
