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
    int n;
    cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    a[0] +=1;
    ll product =1;

    for(int i=0;i<n;i++)
    {
        product *= a[i];
    }

    cout<<product<<endl;


    
    
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

