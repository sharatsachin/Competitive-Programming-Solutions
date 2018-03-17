#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
using ld = long double;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t, n;
    cin >> t;
    cout << fixed;
    while (t--) {
        ld pi, qi, di, sol = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> pi >> qi >> di;
            sol += qi * (pi - pi * (1 + di / 100) * (1 - di / 100));
        }
        cout << setprecision(20) << sol << '\n';
    }
    return 0;
}