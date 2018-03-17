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
    ll T;
    cin >> T;
    while (T--) {
        ll n, ai[100005], sol = 0;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> ai[i];
        }
        sort(ai, ai + n);
        for (ll i = 0; i < n - 1; i++) {
            if (ai[i] == ai[i + 1])
                sol++;
        }
        cout << sol << '\n';
    }
    return 0;
}