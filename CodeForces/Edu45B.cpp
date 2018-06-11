#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,k,ele;
	map<ll,ll> s;
	cin>>n>>k;
	FR(i,0,n) cin>>ele,s[ele]++;
	vector<pair<ll,ll>> a;
	FV(i,s) a.push_back({i->first,i->second});
	n = s.size();
	int n_ = 0;
	FR(i,0,n-1) if(a[i].first<a[i+1].first && a[i+1].first<=a[i].first+k) a[i].second = 0;
	FR(i,0,n) n_ += a[i].second;
	cout<<n_;
	return 0;
}
