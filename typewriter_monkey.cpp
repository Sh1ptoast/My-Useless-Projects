#include <iostream>
#include <vector>
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    string input;
    int input_size = 0;
    char letters[] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    vector<char> v_input;
    vector<char> v_guess;
    int num_guess = 0; // number of guesses
    
    // sets input and input size
    cout << "Welcome to the needlessly complicated input reader! Enter the string you want repeated: ";
    cin >> input;
    input_size = input.size();
    v_guess.resize(input_size);
    
    // fills the vector
    v_input.assign(input.begin(), input.end());
    
    // guesses the word
    while (true) {
        // randomized word
        for (int i = 0; i < input_size; ++i) {
            v_guess[i] = (letters[rand() % 95]);
        }
        ++num_guess;
        // checks the guess
        if (v_guess == v_input) {
            break;
        }
    }
    
    cout << "Your word was: ";
    // outputs the string
    for (int i = 0; i < input_size; ++i) {
        cout << v_guess[i];
    }
    cout << "\nIt took " << num_guess << " tries to guess it.";
    
    return 0;
}
