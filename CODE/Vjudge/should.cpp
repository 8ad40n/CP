#include<iostream>
using namespace std;

void solve(string a, string b)
{
    cout<< a.size() << " "<< b.size()<<endl;
    cout<< a+b <<endl;
    swap(a[0], b[0]);
    cout<< a<< " "<<b<<endl; 
}

int main()
{
    string a,b;
    cin>> a >> b;

    solve(a,b);
}