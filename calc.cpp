#include <iostream>
using namespace std;

enum class RunState { normal, invalid, modeExit, success };

int main() {
	int choice = 0;
	int uses = 0;
	RunState state = RunState::normal;

	while (true) {

		// handling errors and successes
		switch (state) {
		case RunState::invalid:
			cin.clear();
			cin.ignore(1000,'\n');
			choice = 0;
			cout << "\nInvalid input, restarting now.\n\n";
			state = RunState::normal;
			continue;

		case RunState::modeExit:
			cin.clear();
			cin.ignore(1000,'\n');
			choice = 0;
			cout << "\nExiting mode...\n\n";
			state = RunState::normal;
			continue;

		case RunState::success:
			++uses;
			choice = 0;
			state = RunState::normal;
			continue;
		}

		// menu
		if (choice == 0) {
			if (uses == 0) {
				cout << "Welcome to the calculator app! choose what you want to see. Type \"exit\" to exit a mode.\n" <<
				     "1. addition\n2. subtraction\n3. multiplication\n4. division (no remainder)\n5. factorials\n6. exit\n\n" <<
				     "Your choice: ";
			} else {
				cout << "Welcome back! choose what you want to see. Remember, you can type \"exit\" to exit a mode.\n" <<
				     "1. addition\n2. subtraction\n3. multiplication\n4. division (no remainder)\n5. factorials\n6. exit\n\n" <<
				     "Your choice: ";
			}
			cin >> choice;

			// error
			if (cin.fail() || choice < 1 || choice > 6) {
				state = RunState::invalid;
				continue;
			}
			cout << "\n";
		}

		// addition
		else if (choice == 1) {
			int add1 = 0;
			int add2 = 0;
			int sum = 0;
            
			cout << "Type what two numbers you want to be added.\nFirst number: ";
			cin >> add1;
			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}
			cout << "\nAnd the second number: ";
			cin >> add2;
			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}
            
			sum = add1 + add2;
			cout << "The sum is "<< sum << "\n\n";
			state = RunState::success;
			continue;
		}

		// subtraction
		else if (choice == 2) {
			int sub1 = 0;
			int sub2 = 0;
			int difference = 0;
            
			cout << "Type what two numbers you want to be subtracted.\nFirst number: ";
			cin >> sub1;
			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}
			cout << "\nAnd the second number: ";
			cin >> sub2;
			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}
            
			difference = sub1 - sub2;
			cout << "The difference is "<< difference << "\n\n";
			state = RunState::success;
			continue;
		}

		// multiplication
		else if (choice == 3) {
			int mult1 = 0;
			int mult2 = 0;
			int product = 0;
			
			cout << "Type what two numbers you want to multiply.\nFirst number: ";
			cin >> mult1;
			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}
			cout << "\nAnd the second number: ";
			cin >> mult2;
			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}
            
			product = mult1 * mult2;
			cout << "The product is "<< product << "\n\n";
			state = RunState::success;
			continue;
		}

		// division (no remainder)
		else if (choice == 4) {
            double div1 = 0;
			double div2 = 0;
			double quotient = 0;
			
			cout << "Type what two numbers you want to divide.\nDividend: ";
			cin >> div1;
			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}
			cout << "\nDivisor: ";
			cin >> div2;
			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}
			
			// if divided by zero
			if (div2 == 0) {
			    cout << "Error, division by zero is not allowed.";
			    state = RunState::modeExit;
			    continue;
			}
            
			quotient = div1 / div2;
			cout << "The quotient is "<< quotient << "\n\n";
			state = RunState::success;
			continue;
		}

		// factorial
		else if (choice == 5) {
			int factorial = 1; // result
			int fInput = 0; // input

			cout << "Type what number you want to be factorialed.\nFactorial: ";
			cin >> fInput;

			// failsafe + exit
			if (cin.fail()) {
				state = RunState::modeExit;
				continue;
			}

			// if zero
			else if (fInput == 0) {
				cout << "The factorial is 1\n\n";
				state = RunState::success;
				continue;
			}

			// if <0
			else if (fInput < 0) {
				cout << "Error, the input is less than zero.";
				state = RunState::modeExit;
				continue;
			}

			// main factorial
			else {
				for (int i = fInput; i > 1; --i) { // does the math
					factorial *= i;
				}
				cout << "The factorial is " << factorial << "\n\n";
				state = RunState::success;
				continue;
			}
		}

		// exit
		else if (choice == 6) {
			cout << "Byeeeeeee :3 :3 :3\n";
			break;
		}
	}

	cout << "Number of successful uses: " << uses << "\n";
	return 0;
}

/*
Note: any non-number exits the mode, this is intended. the "type "exit"" is there to
make the user feel more confident and in control.
*/
