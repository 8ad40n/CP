//Template
#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define ll          long long
#define pb          push_back
#define pop         pop_back
#define FOR         for(int i=0;i<n;i++)
#define yes         cout<<"YES"<<endl;
#define no          cout<<"NO"<<endl;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi          3.141592653589793238
int main(){
BOOST;

int n;
int k;
cin>>n;
cin>>k;

for(int i=1;i<=k;i++)
{
    if (n%10==0)
    {
        n=n/10; 
    }
    else if (n%10 != 0){
        n=n-1;
    }
}
cout<<n;

}

