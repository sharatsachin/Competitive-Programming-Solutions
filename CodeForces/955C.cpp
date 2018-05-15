#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;

bool check_if_sq(ll g)
{
    ll k = sqrt(g);
    return k * k == g;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll i, q, k, l, r, val;
    set<ll> s;
    for (i = 2; i <= 1e6; i++) {
        int op = 18.0 / log10(i);
        val = 1LL * i * i;
        for (k = 3; k <= op; k++) {
            val *= i;
            if (!check_if_sq(val))
                s.insert(val);
        }
    }
    vector<ll> v(s.begin(), s.end());
    cin >> q;
    for (i = 0; i < q; i++) {
        cin >> l >> r;
        ll s1 = upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin(), v.end(), l);
        ll s2 = floor(sqrtl(r)) - ceil(sqrtl(l)) + 1;
        cout << s1 + s2 << endl;
    }
}