#include "bits/stdc++.h"
using namespace std;
 
#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())
 
using ll = long long;
set<string> st;
 
bool nodot(string x){
    bool e = true;
    FR(i,0,x.length()) if(x[i]=='.') e = false;
    return e;
}
 
bool ending(string x){
    bool e = false;
    FR(i,0,3) if(x[0+i]==x[3+i] && x[3+i]==x[6+i] && x[3+i]!='.') e = true;
    FR(i,0,3) if(x[3*i]==x[3*i+1] && x[3*i+1]==x[3*i+2] && x[3*i+1]!='.') e = true;
    if(x[0]==x[4] && x[4]==x[8] && x[4]!='.') e = true;
    if(x[2]==x[4] && x[4]==x[6] && x[4]!='.') e = true;
    return e;
}
 
void generator(string x, char c, int k){
    x[k]=c;
    if(ending(x) || nodot(x)) {
        st.insert(x);
        return;
    }
    else FR(i,0,x.length()) if(x[i]=='.') generator(x,(c=='X'?'O':'X'),i);
}
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s = ".........";
    FR(i,0,s.length()){
        generator(s,'X',i);
    }
    // FV(i,st){    // to see all the values in the set
    //     cout<<*i<<"\n";
    // }
    while(cin>>s && s!="end"){
        cout<<((st.find(s) != st.end())?"valid\n":"invalid\n");
    }
    return 0;
} 
