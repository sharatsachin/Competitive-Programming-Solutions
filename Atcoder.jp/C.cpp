// Created by Sharat Sachin
#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(ll i=0;i<(n);++i)
#define repA(i,a,n) for(ll i=a;i<=(n);++i)
#define repD(i,a,n) for(ll i=a;i>=(n);--i)
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> a(n),b(n),c(n),sa(n),sb(n),sc(n);
    rep(i,n) cin>>a[i]>>b[i]>>c[i];
    rep(i,n) {
    	if(i==0) sa[0]=a[0], sb[0]=b[0], sc[0]=c[0];
    	else{
    		sa[i] = max(sb[i-1],sc[i-1])+a[i];
    		sb[i] = max(sc[i-1],sa[i-1])+b[i];
    		sc[i] = max(sb[i-1],sa[i-1])+c[i]; 
    	}
    }
    cout<<max(sa[n-1],max(sb[n-1],sc[n-1]));
    return 0;
}