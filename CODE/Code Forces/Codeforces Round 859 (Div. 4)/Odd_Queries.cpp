//Template
#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define pb          push_back
#define pop         pop_back
#define ll          long long
#define FOR         for(int i=0;i<n;i++)
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi          3.141592653589793238


void solve(){
    ll n,q; cin>>n>>q;
    vector<ll>v(n),pre(n,0);
    ll sm=0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sm+=v[i];
    }
    pre[0]=v[0];
    for(ll i=1; i<n; i++) pre[i]=v[i]+pre[i-1];
    while(q--){
        ll l,r,k; cin>>l>>r>>k;
        ll kss=pre[r-1]-(pre[l-1]-v[l-1]);
        ll nsm=sm-kss+(r-l+1)*k;
        if(nsm%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
  
}

int main(){
    BOOST;

    ll t; cin>>t;
    while(t--){
        solve();
    }
}
