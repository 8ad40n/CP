#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a >> b>> c;

    vector<int> v{a,b,c};
  
    sort(v.begin(), v.end());

    for(auto i : v)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<a<<endl<<b<<endl<<c<<endl;
}