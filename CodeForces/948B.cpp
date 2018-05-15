#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;

vector<ll> prime_table(ll n){
    vector<ll> table;
    table.push_back(2);
    for(ll i=3;i<=n;i+=2){
        bool prime=true;
        for(ll j=3;j*j<=i;j+=2){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime)table.push_back(i);
    }
    return table;
}

ll maxPrimeFactor(ll x, vector<ll> &primes){
    for(ll p:primes){
        if(p*p>x)break;
        while(x%p==0)x/=p;
        if(x==1)return p;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tc, ele, sum, v2;
    cin >> v2;
    vector<ll> pt=prime_table(int(sqrt(v2+0.5)));
    ll mpf2 = maxPrimeFactor(v2,pt);
    ll mx = 1000005;
    for (ll i = v2 - mpf2 + 1; i <= v2; i++) {
        ll v1 = i;
        ll mpf1 = maxPrimeFactor(v1,pt);
        if (mpf1 == v1) continue;
        mx = min(v1 - mpf1 + 1,mx);
    }
    cout << mx;
    return 0;
}