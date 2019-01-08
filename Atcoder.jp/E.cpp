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
{   ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,v[105],f[100005],w[105],W;
    cin>>n>>W;
    repA(i,1,100000) f[i]=1e18;
    repA(i,1,n) {
        cin>>w[i]>>v[i];
        repD(j,100000,v[i]) f[j]=min(f[j],f[j-v[i]]+w[i]);
    }
    repD(i,100000,0) if(f[i]<=W) {
        cout<<i;
        return 0;
    }
    return 0;
}