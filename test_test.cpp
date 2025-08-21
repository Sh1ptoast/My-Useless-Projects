#include <iostream>
#include <string>
using namespace std;

int correct_ans_total = 0;
string ans;

// questions and answers
string question[10] = { "What is another name for a school test?",
"Which English county does the River Test flow through?",
"What is this test?", "Where do students usually take tests?",
"What do pH tests actually test for?", "What is a final exam?",
"How should someone prepare for a test in school?",
"Where did standardized written exams originate?",
"What activity during test-taking is usually banned in schools?",
"Last question, how many questions are on this test?" };
string a[10] = { "quiz", "Pennsylvania", "educational assessment", "jail",
"acidity and basicity", "type of decorative egg", "partying",
"England", "sharpening a pencil", "11" };
string b[10] = { "apostrophe", "Hampshire", "type of tree", "restaurant",
"temperature", "first test of a course", "crying",
"America", "searching up the answers", "23" };
string c[10] = { "quack", "Scotland", "type of decorative egg", "school",
"mineral content", "a movie", "studying",
"India", "looking at the clock", "9" };
string d[10] = { "mouse", "all of the above", "species of frog", "beehive",
"microplastics and iron", "last test of a course", "pretending to be a tree",
"China", "reading and writing", "10" };

// lowercase and uppercase correct answers
string low[10] = { "a", "b", "a", "c", "a", "d", "c", "d", "b", "d" };
string high[10] = { "A", "B", "A", "C", "A", "D", "C", "D", "B", "D" };
string num[10] = { "1", "2", "1", "3", "1", "4", "3", "4", "2", "4" };

int main() {
    
    // introduction to the test test
    cout << "Welcome to the test test! let's see how much " << endl;
    cout << "you know about tests!" << endl;
    cout << endl;
    cout << "Type the letter in front of the correct answer." << endl;
    cout << endl;
    
    // the test
    for (int i = 0; i < 10; i++) {
        cout << "Question " << i + 1 << ". " << question[i] << endl;
        cout << "a. " << a[i] << endl;
        cout << "b. " << b[i] << endl;
        cout << "c. " << c[i] << endl;
        cout << "d. " << d[i] << endl;
        cout << "Answer: ";
        cin >> ans;
        if (ans == low[i] || ans == high[i] || ans == num[i]) {
            cout << "Correct" << endl << endl;
            correct_ans_total++;
        } else {
            cout << "Wrong" << endl << endl;
        }
    }
    
    // scoring
    cout << "Your score was " << correct_ans_total << "/10." << endl;
    cout << "You ";
    if ( correct_ans_total < 10) {
        if ( correct_ans_total > 6 ) {
            cout << "only ";
        }
        cout << "got " << ( 10 - correct_ans_total ) << " wrong." << endl;
    } else {
        cout << "got them all correct!" << endl;
    }
    
    return 0;
}
