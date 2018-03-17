#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
ll ai[100005], n, h;
map<long long, bool> dp;
bool retval(ll zz)
{
    if (dp[zz])
        return dp[zz];
    else {
        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            sum += (ai[i] + zz - 1) / zz;
        }
        dp[zz] = (sum <= h);
        return dp[zz];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        dp.clear();
        dp[0] = true;
        ll mx = 0;
        cin >> n >> h;
        for (ll i = 0; i < n; i++) {
            cin >> ai[i];
            mx = max(ai[i], mx);
        }
        ll l = 1, r = mx, m;
        if (retval(mx) && !retval(mx - 1)) {
            cout << mx << '\n';
            continue;
        }
        while (r > l) {
            m = (r + l) / 2;
            //cout<<"\nm="<<m;
            if (!retval(m) && !retval(m - 1)) {
                //  cout<<"\nl="<<m;
                l = m;
            }
            else if (retval(m) && !retval(m - 1)) {
                cout << m << '\n';
                break;
            }
            else if (retval(m - 1) && !retval(m - 2)) {
                cout << m - 1 << '\n';
                break;
            }
            else if (retval(m + 1) && !retval(m)) {
                cout << m + 1 << '\n';
                break;
            }
            else {
                //cout<<"\nr="<<m;
                r = m;
            }
        }
    }
    return 0;
}