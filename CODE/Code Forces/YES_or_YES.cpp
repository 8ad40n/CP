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

void solve()
{
    string s1;
    cin>>s1;
    
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    

    if(s1=="YES")
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
BOOST;

ll t;
cin>>t;
while(t--){
    solve();
}
}
