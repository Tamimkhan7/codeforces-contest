#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve()
{
    int a, b, l;
    cin >> a >> b >> l;
    int k = 0, cnt = 0;
    while (k <= l)
    {
        for (int i = 0; i <= 10; i++)
        {
            for (int j = 0; j <= 10; j++)
            {
                ll ans = k * ((pow(a, i)) * (pow(b, j)));
                //   cout<<ans<<' ';
                if (ans == l)
                    cnt++;
            }
            // cout<<'\n';
        }
        k++;
    }
    cout << cnt << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}