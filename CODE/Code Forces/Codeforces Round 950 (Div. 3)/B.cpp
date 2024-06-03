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
    int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
       
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
       
        int favorite_value = a[f - 1];
       
       
        sort(a.rbegin(), a.rend());
       
        if (favorite_value > a[k - 1]) {
            cout << "YES" << endl;
        } else if (favorite_value < a[k - 1]) {
            cout << "NO" << endl;
        } else {
            int count_fav_in_first_k = 0;
            int total_count_fav = 0;
           
            for (int i = 0; i < k; ++i) {
                if (a[i] == favorite_value) {
                    count_fav_in_first_k++;
                }
            }
           
            for (int i = 0; i < n; ++i) {
                if (a[i] == favorite_value) {
                    total_count_fav++;
                }
            }
           
            if (count_fav_in_first_k == total_count_fav) {
                cout << "YES" << endl;
            } else {
                cout << "MAYBE" << endl;
            }
        }
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

