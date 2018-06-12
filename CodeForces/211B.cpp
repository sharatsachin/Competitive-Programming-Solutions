#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,k;
	cin>>n>>k;
	vector<ll> v(n);
	FR(i,0,n) cin>>v[i];
	vector<ll> s(n,0);
	s[0] = v[0];
	FR(i,1,n) s[i] = s[i-1] + v[i];
	ll z = 1, mi = s[k-1];
	FR(i,1,n-k+1) {
		if((s[k+i-1]-s[i-1]) < mi){
			mi = s[i+k-1]-s[i-1];
			z = i+1;
		}
	}
	cout<<z;
	return 0;
}
