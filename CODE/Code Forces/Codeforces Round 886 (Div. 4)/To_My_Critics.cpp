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
  int a, b, c;
  cin >> a >> b >> c;

 
  bool found = false;
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
        found = true;
        break;
      }
    }
    if (found) break;
  }

  if (found) {
    cout << "YES"<<endl;
  } else {
    cout << "NO"<<endl;
  }

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
