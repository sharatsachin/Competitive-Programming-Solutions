#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,a,t[105];
	cin>>n>>a;
	FR(i,1,n+1){
		cin>>t[i];
	}
	int a1=a-1, a2=a+1, cnt = 0;
	if(t[a]==1) cnt++;
	while(a1>0 && a2<n+1){
		if(t[a1--] + t[a2++]==2) cnt+=2;
	}
	while(a1>0) if(t[a1--]==1)cnt++;
	while(a2<n+1) if(t[a2++]==1)cnt++;
	cout<<cnt;
	return 0;
}
