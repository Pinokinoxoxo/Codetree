#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int hourA, minA, hourB, minB;
    cin >> hourA >> minA >> hourB >> minB;

    int hour = hourA;
    int min = minA;
    int time = 0;

    while(true) {
        if (hour == hourB && min == minB) break;
        min++;
        time++;
        if (min == 60) {
            hour++;
            min = 0;
        }
    }
    
    cout << time;
    return 0;
}