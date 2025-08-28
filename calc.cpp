#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int uses = 0;
    while (true) {
        while (choice == 0) {
            if (uses == 0) {
                cout << "Welcome to the calculator app! choose what you want to see.\n" <<
                "1. addition\n2. subtraction\n3. multiplication\n4. division (no remainder)\n5. factorials\n6. exit\n\n" <<
                "Your choice: ";
                ++uses;
            } else {
                cout << "Welcome back! choose what you want to see.\n" <<
                "1. addition\n2. subtraction\n3. multiplication\n4. division (no remainder)\n5. factorials\n6. exit\n\n" <<
                "Your choice: ";
                ++uses;
            }
            cin >> choice;
            cout << "\n";
        }
        
        while (choice == 1) {
            int add1 = 0;
            int add2 = 0;
            int sum = 0;
            
            cout << "Type what two numbers you want to be added, type both as zero to leave.\nFirst number: ";
            cin >> add1;
            cout << "And the second number: ";
            cin >> add2;
            
            if (add1 == 0 && add2 == 0) {
                choice = 0;
                cout << "\n";
            }
            if (choice != 0) {
                sum = add1 + add2;
                cout << "The sum is "<< sum << ".\n\n";
            }
        }
        while (choice == 2) {
            
        }
        while (choice == 3) {
            
        }
        while (choice == 4) {
            
        }
        while (choice == 5) {
            int factorial = 1; // result
            int fInput = 0; // input
            
            cout << "Type what number you want to be factorialed, type 0 to leave.\nFactorial: ";
            cin >> fInput;
            
            if (fInput == 0) { // exit
                cout << "\n";
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
                cout << "The factorial is " << factorial << ".\n\n";
            }
        }
        if (choice == 6) {
            cout << "Byeeeeeee :3 :3 :3";
            break;
        }
    }
    return uses;
}
