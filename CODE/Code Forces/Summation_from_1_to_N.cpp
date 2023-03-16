//Template
#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define pb          push_back
#define pop         pop_back
#define FOR         for(int i=0;i<n;i++)
#define yes         cout<<"YES"<<endl;
#define no          cout<<"NO"<<endl;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi          3.141592653589793238

int main()
{
    BOOST;

    /*
    long long n;
    cin >> n;
    long long sum= 0;
    
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
    */

   
    long long N;
    cin >> N;

    // Calculate the sum using the formula
    long long sum = (N * (N + 1)) / 2;

    
    cout << sum << endl;

    return 0;
}


    
