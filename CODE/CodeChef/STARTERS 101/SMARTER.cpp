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
    double l,v1,v2;
    cin>>l>>v1>>v2;

    int tr;

    double terTime = ceil(l/v1);
    double hareTime = ceil(l/v2);

    if(hareTime==terTime)
    {
        cout<<-1<<endl;
        
    }
    else{
        tr = (terTime-hareTime) -1;
        cout<<tr<<endl;
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