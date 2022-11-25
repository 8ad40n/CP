#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string a;
        cin>>a;
        int count =0;
        for(int j=0;j<a.size();j++){
            count ++;
        }
        if(count >10){
            cout<<a[0]<<count-2<<a[a.size()-1]<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }

}

