#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define pop pop_back
#define ll long long
#define FOR for (int i = 0; i < n; i++)
#define pi 3.141592653589793238

void solve()
{
    int n, k;
    cin >> n >> k;

    string w;
    cin >> w;
    int result = 0;
    FOR
    {
        if (w[i] == 'B')
        {
            result++;
            i += k - 1;
        }
    }
    cout << result << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
