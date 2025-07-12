#include <string>
#include <iostream>
using namespace std;

int main() {
    // variables
    string yon = "no";
    int good = 0;
    int bad = 0;
    
    // main loop
    while (true) {
        cout << "Hello there, I have a question for you. Do you want to take " <<
        "the best personality test on the internet?\n";
        cin >> yon;
        for (char &c : yon) {
            c = tolower(c);
        }
        if (yon == "yes" || yon == "y") {
            ++good;
            //test
            break;
        } else if (yon == "no" || yon == "n") {
            cout << "... if you didn't wanna take it, then why did you show up?\n";
            bad += 32767;
            break;
        }else {
            cout << "bro take ihis serious\n";
            ++bad;
        }
    }
    // testing score
    cout << "good: " << good << " bad: " << bad <<"\n";
    return 0;
}
