#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end()) 

using ll = long long;

int main() {
    int n;
    char f[2010];
    cin>>n;
    string s;
    cin>>s;
    int k=1,y=1005,z=1005;
    if(n%2==0) k=1;
    else k=-1;
    f[z] = s[0];
    for(int i=1; i<n; i++){
    	if(k==1) f[++z] = s[i], k*=-1;
    	else f[--y] = s[i], k*=-1;
    }
    for(int i=y;i<=z;i++){
    	cout<<f[i];
    }
    cout<<'\n';
}
