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
		// TODO: change choice to cases
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
			int addSum = 0;
            
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
            
			addSum = add1 + add2;
			cout << "The sum is "<< addSum << ".\n\n";
			state = RunState::success;
			continue;
		}

		// subtraction
		else if (choice == 2) {
			int sub1 = 0;
			int sub2 = 0;
			int subSum = 0;
            
			cout << "Type what two numbers you want to be subtracted.\nFirst number: ";
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
            
			subSum = sub1 + sub2;
			cout << "The difference is "<< subSum << ".\n\n";
			state = RunState::success;
			continue;
		}

		// multiplication
		else if (choice == 3) {

		}

		// division (no remainder)
		else if (choice == 4) {

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
				cout << "The factorial is 1.\n\n";
				state = RunState::success;
				continue;
			}

			// if <0
			else if (fInput < 0) {
				cout << "Error, less than zero.\n\n";
				state = RunState::modeExit;
				continue;
			}

			// main factorial
			else {
				for (int i = fInput; i > 1; --i) { // does the math
					factorial *= i;
				}
				cout << "The factorial is " << factorial << ".\n\n";
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

	cout << "Number of uses: " << uses << "\n";
	return 0;
}

/*
Note: any non-number exits the mode, this is intended. the "type "exit"" is there to
make the user feel more confident and in control.
*/
