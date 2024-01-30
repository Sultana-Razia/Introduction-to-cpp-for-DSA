#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max_num = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_num)
        {
            max_num = a[i];
        }
    }
    cout << max_num << endl;
    return 0;
}
