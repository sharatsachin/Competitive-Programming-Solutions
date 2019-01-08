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
    ll n,k;
    cin>>n>>k;
    vector<ll>  v(n),sol(n);
    rep(i,n) cin>>v[i];
    rep(i,n){
        if(i==0) sol[0]=0;
        else if(i==1) sol[1]=abs(v[1]-v[0]);
        else {
        	sol[i]=numeric_limits<ll>::max();
        	for(ll j=i-1;j>=max(0ll,i-k);j--) sol[i]=min(sol[i],sol[j]+abs(v[i]-v[j]));
        }
    }
    cout<<sol[n-1];
    return 0;
}