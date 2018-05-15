#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
using ll = long long;

vector<ll> primeTable(ll n)
{
    vector<ll> table;
    table.push_back(2);
    for (ll i = 3; i <= n; i += 2) {
        bool prime = true;
        for (ll j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime)
            table.push_back(i);
    }
    return table;
}

ll maxPrimeFactor(ll x, vector<ll>& primes)
{
    for (ll p : primes) {
        if (p * p > x)
            break;
        while (x % p == 0)
            x /= p;
        if (x == 1)
            return p;
    }
    return x;
}

int main()
{
    ll x2;
    cin >> x2;
    vector<ll> pt = primeTable(ll(sqrt(x2+1)));
    ll mpf2 = maxPrimeFactor(x2, pt);
    ll min1 = mpf2 * (x2 / mpf2 - 1) + 1;

    ll ans = x2, min_y = x2;
    for (ll x1 = min1; x1 <= x2; x1++) {
        ll mpf1 = maxPrimeFactor(x1, pt);
        if (mpf1 == x1)
            continue;
        ll y = x1 / mpf1, x0 = mpf1 * (y - 1) + 1;
        if (x0 < ans)
            ans = x0;
        if (y == 2)
            break;
    }
    cout << ans;
}