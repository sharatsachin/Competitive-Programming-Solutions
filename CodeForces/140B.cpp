#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,m,b,r,l,mi,el;
	vector<pair<ll,ll>> a;
	a.push_back({0,0});
	ll z1=0, z2=0;
	cin>>n;
	FR(i,1,n+1){
		cin>>el;
		a.push_back({el,i});
	}
	sort(a.begin(), a.end());
	cin>>m;
	FR(i,0,m){
		cin>>b;
		l = 1;
		r = n;
		while(l<=r){
			mi = (r+l)/2;
			if(a[mi].first==b) break;
			else if(a[mi].first>b) r=mi-1;
			else l=mi+1;
		}
		if(a[mi].first==b) z1+=a[mi].second,z2+=n-a[mi].second+1;
	}
	cout<<z1<<" "<<z2<<'\n';
	return 0;
}
