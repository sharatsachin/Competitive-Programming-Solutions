// Created by Sharat Sachin
#include <bits/stdc++.h>

#define rep(i,n) for(ll i=0;i<(n);++i)
#define repA(i,a,n) for(ll i=a;i<=(n);++i)
#define repD(i,a,n) for(ll i=a;i>=(n);--i)

using namespace std;
using ll = long long;

inline ll f(ll a, ll b) { return min(a,b); }
inline ll f(ll a) { return a; }

const int MAXN = 100000, K = 25;
ll st[MAXN][K + 1];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q,l,r;
    cin>>n;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];

    rep(i,n) 
    st[i][0] = f(v[i]);
    repA(j,1,K) repA(i,0,n-(1<<j))
        st[i][j] = f(st[i][j-1], st[i+(1<<(j-1))][j-1]);
    
    ll log[MAXN+1];
    log[1] = 0;
    repA(i,2,MAXN) log[i]=log[i/2]+1;

    cin>>q;
    while(q--){
        cin>>l>>r;
        if(l>r) swap(l,r);
        ll j = log[r-l+1];
        ll mn = f(st[l][j], st[r-(1<<j)+1][j]);
        cout<<mn<<'\n';
    }
    return 0;
}
