#include"bits/stdc++.h"
using namespace std;
int main()
{
	char l1,l2;
	int X[9][9], Y[9][9];
	int a,b,t,c,d,x,y; 
	cin>>t;
	while(t--){
		cin>>l1>>b>>l2>>d;
		a = l1-'A'+1, c = l2-'A'+1;
		if((a+b)%2 == (c+d)%2){
			for(int i=1; i<=8; i++){
				for(int j=1; j<=8; j++){
					if((9-i+j==a+b && i-9+j==c-d) || (9-i+j==c+d && i-9+j==a-b)){
						x = i, y = j;
					}
				}
			}
			int k=0;
			char z = char(y+'A'-1);
			if((9-x)!=b && z!=l1) k++;
			if((9-x)!=d && z!=l2) k++;

			cout<<k<<" ";
			if((9-x)!=b && z!=l1) cout<<l1<<' '<<b<<' ';
			cout<<z<<' '<<(9-x)<<' ';
			if((9-x)!=d && z!=l2) cout<<l2<<' '<<d<<' ';
			if(b==d && l1==l2) cout<<l2<<' '<<d<<' ';
			cout<<'\n';
		}
		else{
			cout<<"Impossible\n";
		}
	}
	return 0;
}