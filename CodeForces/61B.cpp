#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long; 

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n;
	vector<int> arr(1005,1005);
	arr[0] = 0;
	cin>>n;
	for (int i = 1; i <= n; ++i){
		cin>>arr[i];
	}
	int mx = 0;
	for (int i = 1; i <= n; ++i){
		int cnt = 1 , c1 = 0, c2 = 0;
		for (int j=i-1; j>0; j--){
			if(arr[j]<=arr[j+1]) c1++;
			else break;
		}
		for (int j=i+1; j<=n; j++){
			if(arr[j]<=arr[j-1]) c2++;
			else break;
		}
		cnt = c1+c2+1;
		// cout<<arr[i]<<" "<<c1<<" "<<c2<<" "<<cnt<<'\n';
		mx = max(mx,cnt);
	}
	cout<<mx;
	return 0;
}
