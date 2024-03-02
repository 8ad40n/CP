#include<bits/stdc++.h>
using namespace std;

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void solve() {
    vector<int> sides(4);
    for(int i = 0; i < 4; i++) {
        cin >> sides[i];
    }
    sort(sides.begin(), sides.end(), greater<int>()); 
    double maxArea = 0.0;
    for (int i = 0; i < 2; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            for (int k = j + 1; k < 4; ++k) {
                double a = sides[i], b = sides[j], c = sides[k];
                double area = calculateArea(a, b, c);
                maxArea = max(maxArea, area);
            }
        }
    }

    cout << fixed << setprecision(2) << maxArea << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
