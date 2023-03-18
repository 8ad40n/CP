#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    int last_digit_n = n % 10;
    int last_digit_m = m % 10;
    int sum_last_digits = last_digit_n + last_digit_m;
    cout << sum_last_digits << endl;
    return 0;
}
