#include "bits/stdc++.h"
#define M 1000000007
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, f[100005] = { 0 };
    cin >> t;
    int x, n, q, ind;
    while (t--) {
        cin >> n >> q;
        vector<pair<int,int>> vpr;
        vpr.push_back({0,0});
        for (int i = 1; i <= n; i++){
            cin >> f[i];
            vpr.push_back({f[i],i});
        }
        sort(vpr.begin(), vpr.end());
        for (int i = 0; i < q; i++) {
            cin >> x;
            int gre, lea, ind, l = 1, h = n, m;
            while (l <= h) {
                m = (l + h) / 2;
                if (vpr[m].first == x)
                    break;
                else if (vpr[m].first < x)
                    l = m + 1;
                else if (vpr[m].first > x)
                    h = m - 1;
            }
            int nl = 0, nge = 0, ff=0;
            l = 1, h = n;
            ind = vpr[m].second;
            lea = m-1;
            gre = n-lea-1;
	    	while(l<=h){
	    		m = (l+h)/2;
	    		if(gre<nge || lea<nl){
	    			ff = 1; break; 
	    		} 
	    		// cout<<f[m]<<" "<<m<<" "<<nl<<" "<<nge<<" \n";
	    		if (f[m] == x) break;
	    		else if (f[m] < x && ind > m ) lea--, l = m+1;
	    		else if (f[m] < x && ind < m ) nge++, h=m-1;
	    		else if (f[m] > x && ind < m ) gre--, h = m-1;
	    		else if (f[m] > x && ind > m ) nl++, l = m+1;
	    	}
	    	// cout<<nl<<" "<<nge<<" \n";
	    	if(ff==1) cout<<"-1\n"; 
	    	else cout<<max(nl,nge)<<'\n';
        }
    }
    return 0;
}   