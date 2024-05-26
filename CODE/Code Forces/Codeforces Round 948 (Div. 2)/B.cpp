#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define pb          push_back
#define pop         pop_back
#define ll          long long
#define FOR         for(int i=0;i<n;i++)
#define pi          3.141592653589793238

void solve(int x)
{
   vector<int>result;
   int i=0;
   while(x!=0)
   {
    if(x%2!=0)
    {
        if(x%4==1)
        {
            result.push_back(1);
            x-=1;
        }
        else{
            result.push_back(-1);
            x+=1;
        }
    }
    else{
        result.push_back(0);
    }
    x/=2;
    i++;
   }
   cout<<result.size()<<endl;
   for(int j=0;j<result.size();++j)
   {
    cout<<result[j]<<" ";
   }
   cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;

        solve(x);
    }
}

