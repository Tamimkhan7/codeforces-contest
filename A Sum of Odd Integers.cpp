#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if (n % 2 == k % 2 && k * k <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}