#include<bits/stdc++.h>
using namespace std;

 #define ll long long
 #define MOD 1000000007
 #define SIZE 1e6+2
 #define endl "\n"

 void solve()
 {
    ll n;
    cin>>n;

    vector <ll> v(n);
    ll z=0,nz=0,pz=0;

    map<ll,ll>mp;

    for(ll i=0;i<n;i++){
        cin>> v[i];
        if(v[i]==0) z++;
        else{
            nz++;
            mp[v[i]]++;
            if(v[i]!=1) pz++;

        }
    }

    if(z>=(nz+2)){
        if (mp.find(1)==mp.end()) cout<<1<<endl;
        else if (pz>0) cout<< 1<<endl;
        else cout<<2<<endl;
    }
    else cout<<0<<endl;
 }

 int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie (0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

 }