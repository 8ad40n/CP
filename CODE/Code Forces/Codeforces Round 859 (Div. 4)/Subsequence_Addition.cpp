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


void a(){
     ll n;
    cin>>n;
    vector<ll> v(n);
    FOR{
        cin>>v[i];

    }
    sort(v.begin(),v.end());

    ll sm=1;
    if(v[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=1;i<n;i++)
    {
        if(v[i]<=sm)
        {
            sm += v[i];
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;

        }
    }
    cout<<"YES"<<endl;   
    }

int main(){
BOOST;

ll t;
cin>>t;
while(t--){
    a();
}

}
