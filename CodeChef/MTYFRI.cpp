#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using vll = vector<ll>;

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, as, bs, af, bf, ak, bk, ele, mx, a[5005], b[5005];
        cin >> n >> k;
        if (k > bs)
            k = bs;
        bs = n / 2, as = n / 2 + (n % 2);
        for (ll i = 0; i < n; i++) {
            if (i % 2 == 0)
                cin >> a[i / 2];
            else
                cin >> b[(i - 1) / 2];
        }
        sort(a, a + as);
        sort(b, b + bs);
        af = accumulate(a, a + as, 0);
        bf = accumulate(b, b + bs, 0);
        ak = 0, bk = 0, mx = 0;
        for (int z = 0; z < k; z++) {
            ak += a[as - 1 - z], bk += b[z];
            mx = max(mx, ak - bk);
        }
        cout << ((af - mx < bf + mx) ? "YES\n" : "NO\n");
    }
    return 0;
}