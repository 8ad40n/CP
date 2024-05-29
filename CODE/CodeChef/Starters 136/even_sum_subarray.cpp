#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define pb          push_back
#define pop         pop_back
#define ll          long long
#define FOR         for(int i=0;i<n;i++)
#define pi          3.141592653589793238

void solve()
{
   int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        unordered_map<int, int> prefix_sum_index;
        int prefix_sum = 0;
        int max_length = 0;

        prefix_sum_index[0] = -1;  
        for (int i = 0; i < N; ++i) {
            prefix_sum += A[i];
            if (prefix_sum % 2 == 0) {
                max_length = max(max_length, i + 1);
            } else {
                if (prefix_sum_index.find(prefix_sum) == prefix_sum_index.end()) {
                    prefix_sum_index[prefix_sum] = i;
                } else {
                    max_length = max(max_length, i - prefix_sum_index[prefix_sum]);
                }
            }
        }
        
        cout << max_length << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

