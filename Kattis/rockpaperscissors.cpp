#include"bits/stdc++.h"
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<setprecision(3)<<fixed;
	while(n!=0){
		int g = (k*(n-1)*n)/2;
		float win[101]={0.0}, loss[101]={0.0};
		while(g--){
			int p1,p2;
			string m1,m2;
			cin>>p1>>m1>>p2>>m2;
			// cout<<p1<<" - "<<p2<<'\n';
			if  ((m1=="rock" && m2=="scissors")
				||(m1=="paper" && m2=="rock")
				||(m1=="scissors" && m2=="paper"))
				win[p1]++, loss[p2]++;
			else if  ((m1=="rock" && m2=="paper")
				||(m1=="paper" && m2=="scissors")
				||(m1=="scissors" && m2=="rock"))
				win[p2]++, loss[p1]++;
		}
		for(int i=1; i<=n; i++){
			if((win[i]+loss[i])==0) cout<<"-\n";
			else cout<<win[i]/(win[i]+loss[i])<<'\n';
		}
		cout<<'\n';
		cin>>n>>k;
	}
	return 0;
}