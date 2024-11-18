#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int sec = 0;
int since = 1;
int sms = 0;
char plural = 's';
char singular = '\0';

int main(){
    while(true){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        sec ++;
        since ++;
        sms = since - sec;
        cout << "It has been " << sms << " second" << (sms > 1 ? plural : singular)<< " since the last second." << endl;
        cout << "This system will close in " << (60 - sec) << " seconds." << endl;
        if (sec == 60){
            break;
        }
    }
    
    return 0;
}
