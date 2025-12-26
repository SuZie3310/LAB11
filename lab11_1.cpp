// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main() {
    srand(static_cast<unsigned int>(time(0)));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    int r = rand() % 9;
    if (r == 0) {
        cout << "You will get A in this 261102.";
    } else if (r == 1) {
        cout << "You will get B+ in this 261102.";
    } else if (r == 2) {
        cout << "You will get B in this 261102.";
    } else if (r == 3) {
        cout << "You will get C+ in this 261102.";
    } else if (r == 4) {
        cout << "You will get C in this 261102.";
    } else if (r == 5) {
        cout << "You will get D+ in this 261102.";
    } else if (r == 6) {
        cout << "You will get D in this 261102.";
    } else if (r == 7) {
        cout << "You will get F in this 261102.";
    } else if (r == 8) {
        cout << "You will get W in this 261102.";
    }
    return 0;
}