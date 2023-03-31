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
int main(){
BOOST;

ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;

    ll mihai=0;
    ll bianca =0;

    vector<ll> v(n);

    FOR{
        cin>> v[i];
    }

    FOR{
        if(v[i]%2 == 0)
        {
            mihai+=v[i];

        }
        else{
            bianca+=v[i];
        }

    }

    if(mihai > bianca){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

}

