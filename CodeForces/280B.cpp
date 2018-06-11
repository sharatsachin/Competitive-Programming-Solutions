#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,l,ele;
	cin>>n>>l;
	set<ll> ls;
	for(ll i=0; i<n; i++){
		cin>>ele;
		ls.insert(ele);
	}
	double mx = 0;
	vector<ll> vec(ls.begin(), ls.end());
	FR(i,0,vec.size()-1){
		mx = max(mx,(double)(vec[i+1]-vec[i])/2);
	}
	mx=max(mx,(double)vec[0]);
	mx=max(mx,(double)l-vec[vec.size()-1]);
	cout<<setprecision(10)<<fixed<<mx;
	return 0;
}
