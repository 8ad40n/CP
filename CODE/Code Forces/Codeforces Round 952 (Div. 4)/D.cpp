#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    
    int min_row = INT_MAX, max_row = INT_MIN;
    int min_col = INT_MAX, max_col = INT_MIN;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                min_row = min(min_row, i);
                max_row = max(max_row, i);
                min_col = min(min_col, j);
                max_col = max(max_col, j);
            }
        }
    }
    
    int center_row = (min_row + max_row) / 2 + 1;
    int center_col = (min_col + max_col) / 2 + 1;
    
    cout << center_row << " " << center_col << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
