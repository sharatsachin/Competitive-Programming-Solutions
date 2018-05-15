#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll,ll>;
using vpll = vector<pll>;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll m,n;
	char ARR[505][505];
	cin>>m>>n;
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n; j++){
			cin>>ARR[i][j];
		}
	}
	ll flag = 0;
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n-1; j++){
			if((ARR[i][j]=='S')&&(ARR[i][j+1]=='W')) flag = 1;
			if((ARR[i][j]=='W')&&(ARR[i][j+1]=='S')) flag = 1; 
		}
	}
	for(ll i=0; i<m-1; i++){
		for(ll j=0; j<n; j++){
			if((ARR[i][j]=='S')&&(ARR[i+1][j]=='W')) flag = 1;
			if((ARR[i][j]=='W')&&(ARR[i+1][j]=='S')) flag = 1; 
		}
	}
	if(flag == 1) cout<<"No\n";
	else{
		cout<<"Yes\n";
		for(ll i=0; i<m; i++){
			for(ll j=0; j<n; j++){
				if(ARR[i][j]=='.')ARR[i][j]='D';
				cout<<ARR[i][j];
			}
			cout<<'\n';
		}
	}
	return 0;
}