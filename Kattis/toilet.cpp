#include"bits/stdc++.h"
using namespace std;
int main()
{
	int a,b,c;
	a=b=c=0;
	string s;
	cin>>s;
	if(s[0]=='D' && s[1]=='U') a+=1, b+=2, c+=1;
	else if(s[0]=='D' && s[1]=='D') a+=1;
	else if(s[0]=='U' && s[1]=='U') b+=1;
	else if(s[0]=='U' && s[1]=='D') a+=2, b+=1, c+=1;
	for(int i=2; i<s.length(); i++){
		if(s[i-1]=='D' && s[i]=='U') b+=2, c+=1;
		else if(s[i-1]=='D' && s[i]=='D') a+=2;
		else if(s[i-1]=='U' && s[i]=='U') b+=2;
		else if(s[i-1]=='U' && s[i]=='D') a+=2, c+=1;
	}
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
	return 0;
}