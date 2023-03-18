#include<bits/stdc++.h>
 using namespace std;
 
 #define ll long long
 #define MOD 1000000007
 #define SIZE 1e6+2
 #define endl "\n"

 void solve(){
     ll a,b,c,d; 
     cin>>a>>b>>c>>d;
     if(d<b){
         cout<<-1<<endl;
         return;
     }
     ll ans1, aa;
     aa=a+d-b;
    if(aa<c){
        cout<<-1<<endl;
         return;
     }
     ans1= (d-b)+abs(aa-c);
    cout<<ans1<<endl;
 }
 int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie (0);
     ll t; 
     cin>>t;
    while(t--){
         solve();
    }
    return 0;
}