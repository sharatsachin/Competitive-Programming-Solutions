#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n,m;
	char r;
	set<char> ss;
	char grid[105][105];
	cin>>n>>m>>r;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>grid[i][j];
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(grid[i][j]!='.' && grid[i][j]!=r){
				if((grid[i-1][j]==r) || (grid[i][j-1]==r) 
				|| (grid[i+1][j]==r) || (grid[i][j+1]==r)) {
					ss.insert(grid[i][j]);
				}
			}
		}
	}
	cout<<ss.size();
	return 0;
}
