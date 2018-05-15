#include "bits/stdc++.h"

using namespace std;

using ll = long long;
using ld = long double;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll hh,mm;
	ld h,d,c,n,ans;
	cin>>hh>>mm;
	cin>>h>>d>>c>>n;
	if(hh>=20) cout<<fixed<<ceil(h/n)*c*0.8<<'\n';
	else{
		ld t1 = (float)(20*60 - (hh*60+mm));
		cout<<fixed<<min(ceil(h/n)*c,ceil((h+t1*d)/n)*c*0.8)<<'\n';
	}
	return 0;
}