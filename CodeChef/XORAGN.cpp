#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n, xr=0, ele;
    	cin>>n;
    	for(int i=0; i<n; i++){
    		cin>>ele;
    		xr ^= (2*ele);
    	}
    	cout<<xr<<"\n";
    }
    return 0;
} 