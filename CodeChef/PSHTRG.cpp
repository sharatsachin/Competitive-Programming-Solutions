#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, q, ai[100005], ch, fi, se;
    cin >> n >> q;
    for (ll i = 1; i <= n; i++) {
        cin >> ai[i];
    }
    for (ll i = 1; i <= q; i++) {
        cin >> ch >> fi >> se;
        if (ch == 1) {
            ai[fi] = se;
        }
        else {
            ll x = 0, y = 0, z = 0, mx = 0;
            vll vec(ai + fi, ai + se + 1);
            int f = 0;
            sort(vec.begin(), vec.end());
            ll sz = vec.size();
            for (z = sz - 1; z >= 2 && f != 2; z--) {
                for (y = z - 1; y >= 1 && f != 2; y--) {
                    for (x = y - 1; x >= 0 && f != 2; x--) {
                        if (vec[x] + vec[y] > vec[z] && vec[y] + vec[z] > vec[x] && vec[x] + vec[z] > vec[y]) {
                            f = 1;
                            mx = max(vec[x] + vec[y] + vec[z], mx);
                            if (vec[x] + vec[y] + vec[z] < mx) {
                                f = 2;
                            }
                        }
                    }
                }
            }
            if (f == 0)
                cout << "0\n";
            else
                cout << mx << "\n";
            vec.clear();
        }
    }

    return 0;
}