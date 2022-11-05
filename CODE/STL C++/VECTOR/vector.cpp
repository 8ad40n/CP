#include<iostream>
#include <vector>
using namespace std;
int main()
{
    ///*
    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(100);
    v.push_back(1000);

    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    v.pop_back();
    v.push_back(0);
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    //v.clear();  //clear the vector
    cout<<endl<<v.size();
    //*/


/*
   vector<int>v(50,7);  //total 50 index....all element are 7
   for(int i=0;i<50;i++){
        cout<<v[i]<<" ";
    }
*/

}
