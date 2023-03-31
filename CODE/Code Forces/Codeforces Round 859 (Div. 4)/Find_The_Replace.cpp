//Template
#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define pb          push_back
#define pop         pop_back
#define ll          long long
#define FOR         for(int i=0;i<n;i++)
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi          3.141592653589793238



bool is_alternating(string s) {
    // Check if s is an alternating binary string
    char last = ' ';
    for (char c : s) {
        if (c == last) {
            return false;
        }
        last = c;
    }
    return true;
}


int main(){
BOOST;

ll t;
cin>>t;
while(t--){
    string s;
    cin >> s;
    bool possible = false;
    for (char c = 'a'; c <= 'z'; c++) {
        // Try replacing c with 0 and 1
        string s0 = s, s1 = s;
        for (char& sc : s0) {
            if (sc == c) {
                sc = '0';
            }
        }
        for (char& sc : s1) {
            if (sc == c) {
                sc = '1';
            }
        }
        if (is_alternating(s0) || is_alternating(s1)) {
            possible = true;
            
        }
    }
    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

}