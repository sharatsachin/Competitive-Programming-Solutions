#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll,ll>;
using vpll = vector<pll>;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string s;
	cin>>s;
	map<char, int> M;
	for(int i=0; i<s.length(); i++){
		M[s[i]]++;
	}
	if(M.size()<2 || M.size()>4 || s.size()<4) {
		cout<<"No";
		return 0;
	}
	if(M.size()==3 || M.size()==4) {
		cout<<"Yes";
		return 0;
	}
	if(M.begin()->second == 1 || M.rbegin()->second == 1) {
		cout<<"No";
		return 0;
	}
	cout<<"Yes";
	return 0;
}