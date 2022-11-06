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

long long int n;
int lucky = 0;

cin >> n;

while(n)
{

if(n % 10 == 7 || n % 10 == 4)
lucky++;

n = n / 10;
}

if(lucky == 7 || lucky == 4)
yes
else
no
}

