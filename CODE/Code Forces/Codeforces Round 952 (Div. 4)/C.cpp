#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    long long totalSum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int good = 0;
    long long prefixSum = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];
        if (arr[i] == prefixSum - arr[i]) {
            good++;
        }
    }

    cout << good << endl;
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
