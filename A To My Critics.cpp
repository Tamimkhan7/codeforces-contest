#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007

int main()
{
    faster;
    int t;
    cin >> t;

    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];

        sort(arr, arr + 3);
        int k = arr[1] + arr[2];
        if (k >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}