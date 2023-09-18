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
    int arr[n];
    bool found = false;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1])
        {
            cout<<i+1<<endl;
            found=true;
        }
    }
    if (!found){
        if (arr[0]!=arr[1]){
            cout<<1<<"\n";
        } else{
            cout<<n<<"\n";
        }
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