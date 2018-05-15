#include "bits/stdc++.h"
#define M 1000000007
using namespace std;
using ll = long long;
using vll = vector<ll>;
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll t, f[100005]={0};
	f[2] = 1;
	for(ll k=3; k<100004; k++) f[k] = (f[k-1] + f[k-2])%M;
	cin>>t;
	while(t--){
		ll m,n,a[100005],b[100005],res=0,sa,sb;
		cin>>m>>n;
		for(ll i=1; i<=m; i++) cin>>a[i];
		for(ll i=1; i<=m; i++) cin>>b[i];
        sa = accumulate(a+1,a+m+1,0,[](ll x, ll y){return (x+y)%M;});
		sb = accumulate(b+1,b+m+1,0,[](ll x, ll y){return (x+y)%M;});
		sa = (sa*m)%M;
		sb = (sb*m)%M;
        if(n==1) res = sa;
		else res = ((sa*f[n-1])%M+(sb*f[n])%M)%M;
		cout<<res<<'\n';
	}
	return 0;
} 