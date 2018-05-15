#include "bits/stdc++.h"
 
using namespace std;
using ll = long long;
using vll = vector<ll>;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vll p = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227 };
    ll t;
    cin >> t;
    while(t--){
    	ll n, ele, f, mn, mx, rem;
    	vll v;
    	cin>>n;
    	for(int i=0; i<n; i++){
    		cin>>ele;
    		v.push_back(ele);
    	}
    	sort(v.begin(), v.end());
    	mn = v[0], mx = sqrt(v[n-1])+10;
    	if(mn==1){
    		cout<<"0\n";
    		continue;
    	}
    	for(int i=0; i<p.size(); i++){
    		f = 0;
    		for(int j=0; j<n; j++){
    			if(v[j]==-1) continue;
    			if(v[j]%p[i]==0 && f==0) f = 1;
    			else if(v[j]%p[i]==0 && f==1) v[j] = -1;	
    		}
    	}
    	rem = count(v.begin(), v.end(), -1);
    	if(n-rem==1) cout<<"-1\n";
    	else cout<<rem<<'\n';
    	v.clear();
    }
    return 0;
} 