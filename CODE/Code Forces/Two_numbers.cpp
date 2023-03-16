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


int main() {
    int A, B;
    cin >> A >> B;

    // Calculate the floor, ceil, and round results
    int floor_res = floor((double)A / B);
    int ceil_res = ceil((double)A / B);
    int round_res = round((double)A / B);

    cout << "floor " << A << " / " << B << " = " << floor_res << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil_res << endl;
    cout << "round " << A << " / " << B << " = " << round_res << endl;

    return 0;
}
