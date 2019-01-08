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
    ll n,w;
    cin>>n>>w;
    vector<ll> vw(n+1),vv(n+1);
    rep(i,n) cin>>vw[i+1]>>vv[i+1];
    ll mat[n+1][w+1];
    rep(i,n+1) rep(j,w+1) mat[i][j]=0;
    repA(i,1,n){
    	repA(j,1,w){
    		if(j-vw[i]>=0) mat[i][j] = max(mat[i-1][j-vw[i]]+vv[i],mat[i-1][j]);
    		else mat[i][j] = mat[i-1][j];
    	}
    }
    // rep(i,n+1) rep(j,w+1) cout<<mat[i][j]<<" \n"[j==w];
    cout<<mat[n][w];
    return 0;
}