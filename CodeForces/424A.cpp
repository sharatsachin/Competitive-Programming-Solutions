#include "bits/stdc++.h"
using namespace std;
#define FR(i,a,b) for(auto i=(a);i<(b);i++)
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int a=-1,n,c=1,old = -1,cold=1,flag=0;
    cin>>n;
    n++;
    while(n--){
        old=a;
        cin>>a;
        cold=c;
        if(a>old)c=1;
        else if(a==old)c=2;
        else if(a<old)c=3;
        //cout<<cold<<" "<<c<<"\n";
        if(c<cold&&n!=0){
            cout<<"NO";
            flag =1;
            return 0;
        }

    }
    if(flag==0)cout<<"YES";
}
