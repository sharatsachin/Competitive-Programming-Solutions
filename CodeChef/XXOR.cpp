#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;
using ll = long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, q, ai[100005], na, l, r;
    ll ones[100005][32] = { { 0 } };
    cin >> n >> q;
    for (ll i = 1; i <= n; i++) {
        cin >> ai[i];
        na = ai[i];
        for (ll k = 1; k < 32; k++) {
            ones[i][k] = ones[i - 1][k];
            if (na & (1 << (k - 1))) {
                ones[i][k]++;
            }
        }
    }
    for (ll i = 0; i < q; i++) {
        cin >> l >> r;
        ll sol = 0;
        for (ll k = 1; k < 32; k++) {
            if (ones[r][k] - ones[l - 1][k] < ((r - l + 1) - (ones[r][k] - ones[l - 1][k]))) {
                sol = sol | (1 << (k - 1));
            }
        }
        cout << sol << '\n';
    }
    return 0;
}