#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string a[3];
	map<char,int> mp1,mp2;
	for(int i=0;i<3;i++) {
		cin>>a[i];
		if(a[i][1]=='<') swap(a[i][0],a[i][2]),a[i][1]='>';
		// cout<<a[i]<<"\n";
		mp1[a[i][0]]++;
		mp2[a[i][2]]++;
	}
	set<int> s1,s2;
	s1.insert(mp1['A']);
	s1.insert(mp1['B']);
	s1.insert(mp1['C']);
	s2.insert(mp2['A']);
	s2.insert(mp2['B']);
	s2.insert(mp2['C']);
	// cout<<s1.size()<<" "<<s2.size();
	if(s1.size()!=3||s2.size()!=3){
		cout<<"Impossible";
	}
	else{
		if(mp1['A']==0) cout<<'A';
		else if(mp1['B']==0) cout<<'B';
		else cout<<'C';
		if(mp1['A']==1) cout<<'A';
		else if(mp1['B']==1) cout<<'B';
		else cout<<'C';
		if(mp1['A']==2) cout<<'A';
		else if(mp1['B']==2) cout<<'B';
		else cout<<'C';
	}
	return 0;
}
