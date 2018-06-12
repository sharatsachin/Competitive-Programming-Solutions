#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string n;
	cin>>n;
	cout<<n;
	reverse(n.begin(), n.end());
	cout<<n;
	return 0;
}
