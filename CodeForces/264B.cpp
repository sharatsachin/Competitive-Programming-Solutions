#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,sol,mx=0,ele;
	cin>>n;
	FR(i,0,n){
		cin>>ele;
		mx = max(mx,ele);
	}
	cout<<mx;
	return 0;
}
