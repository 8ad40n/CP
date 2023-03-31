#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {  // read input until end of file
        if (x == 1999) {
            cout << "Correct" << endl;
            return 0;  // terminate program
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
