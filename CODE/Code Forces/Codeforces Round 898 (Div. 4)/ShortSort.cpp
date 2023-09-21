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
    char x,y,z;
    cin>>x>>y>>z;    

    if(x=='a' && y=='b' && z=='c')
    {
        cout<<"YES"<<endl;
    }
    else if(x=='b' && y=='a' && z=='c')
    {
        cout<<"YES"<<endl;
    }
    else if(x=='c' && y=='b' && z=='a')
    {
        cout<<"YES"<<endl;
    }
    else if(x=='a' && y=='c' && z=='b')
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

