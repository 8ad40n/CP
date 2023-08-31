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
    int nn;
    cin>>nn;
    int answer = 0, answer1;
    for(int i=1;i<=nn;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x<=10)
        {
            if(y>answer){
                answer = y;
                answer1 = i;
            }
        }
    }
    cout<<answer1<<endl;

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

