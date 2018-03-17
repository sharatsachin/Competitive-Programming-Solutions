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
    ll t;
    cin >> t;
    while (t--) {
        ll n, it;
        vector<ll> fi, si;
        bool fr = true, ba = true;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> it;
            fi.push_back(it);
        }
        for (int i = 0; i < n; ++i) {
            cin >> it;
            si.push_back(it);
        }
        for (int i = 0; i < n; ++i) {
            if (fi[i] > si[i])
                fr = false;
        }
        for (int i = 0; i < n; ++i) {
            if (fi[i] > si[n - 1 - i])
                ba = false;
        }
        if (fr && ba)
            cout << "both\n";
        else if (fr)
            cout << "front\n";
        else if (ba)
            cout << "back\n";
        else
            cout << "none\n";
    }
    return 0;
}