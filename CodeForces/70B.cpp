#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n;
	cin>>n;
	string s = "GBIVGB";
	int a = n/7;
	int b = n%7;
	while(a--) cout<<"ROYGBIV";
	cout<<s.substr(0,b);
	return 0;
}
