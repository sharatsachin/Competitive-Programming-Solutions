#include "bits/stdc++.h"
using namespace std;
#define FR(i,a,b) for(auto i=(a);i<(b);i++)
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string str;
    char a;
    int n=52;
    vector<char> V;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    while(cin>>a)
    {
        if (isdigit(a)) putchar (a);
        else if (isupper(a)){
            for(int j=0;j<26;j++){
                if(tolower(a)==V[j]){
                    putchar (toupper(V[j+26]));
                }
            }
        }
        else {
            for(int j=0;j<26;j++){
                if(a==V[j]){
                    putchar (V[j+26]);
                }
            }
        }
    }
    return 0;
}
