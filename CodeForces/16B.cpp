#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,m,ai,bi;
	vector<pair<ll,ll>> vll;
	cin>>n>>m;
	FR(i,0,m){
		cin>>ai>>bi;
		vll.push_back({bi,ai});
	}
	sort(vll.begin(), vll.end());
	int cnt=0, sol=0;
	for(int i=m-1;i>=0; i--){
		if(cnt+vll[i].second<=n) cnt+=vll[i].second, sol+=(vll[i].first*vll[i].second);
		else {sol+=(vll[i].first*(n-cnt));break;}
	}
	cout<<sol;
	return 0;
}
