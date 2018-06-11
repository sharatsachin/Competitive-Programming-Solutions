#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,m,a,b,z1,z2;
	cin>>n>>m>>a>>b;
	z1 = (n/m)*m, z2 = ((n+m-1)/m)*m;
	cout<<z1<<" "<<z2;
	cout<<min((n-z1)*b,(z2-n)*a)<<"\n";
	return 0;
}
