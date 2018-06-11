#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n=0,cnt;
	string s;
	cin>>s;
	cnt = ((s.length()>1)?1:0);
	for(int i=0;i<s.length();i++){
		n+=(int)s[i]-'0';
	}
	while(n/10!=0){
		int n_ = n;
		n = 0;
		while(n_){
			n+=n_%10, n_/=10;
		}
		cnt++;
	}
	cout<<cnt;
	return 0;
}
