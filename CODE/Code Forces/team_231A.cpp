#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    int count =0;
    for(int i=1;i<=t;i++){
        
        cin>>a>>b>>c;
        
        
        if((a+b+c)>=2 && (a+b+c)<=3){
            count=count+1;
            
        }
       
    } 
    cout<<count<<endl;
    
}