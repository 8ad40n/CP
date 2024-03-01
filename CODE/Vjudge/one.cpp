#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n-1);

    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int a = *min_element(arr.begin(), arr.end());
    int b = *max_element(arr.begin(), arr.end());

    for(int i=a;i<=b;i++)
    {
        if (i != arr[i])
        {
            cout<< i;
            break;
        }
    }


}