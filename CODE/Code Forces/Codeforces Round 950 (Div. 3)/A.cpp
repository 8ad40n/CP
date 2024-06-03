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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    
    string levels = "ABCDEFG";
    unordered_map<char, int> hash;
    
    for (char c : s) {
        hash[c]++;
    }
    
    int count = 0;
    
    for (char level : levels) {
        if (hash[level] < m) {
            count += (m - hash[level]);
        }
    }
    
    cout << count << endl;
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

