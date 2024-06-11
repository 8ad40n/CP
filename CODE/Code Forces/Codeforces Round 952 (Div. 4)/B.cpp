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
    ll n;
    cin >> n;
    ll maxSum = 0;
    ll optimalX = 2;

    for (ll x = 2; x <= n; ++x) {
        ll k = n / x;
        ll sumMultiples = x * (k * (k + 1)) / 2;
        if (sumMultiples > maxSum) {
            maxSum = sumMultiples;
            optimalX = x;
        }
    }

    cout << optimalX << endl;
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

