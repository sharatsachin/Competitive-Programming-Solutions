#include"bits/stdc++.h"
using namespace std;
int main()
{
    char ch;
    int n=0;
    bitset<8>a,b;
    bitset<15>c,d;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>ch;
            if(ch=='.')continue;
            n++;
            if(a[i]==1||b[j]==1||c[i+j]==1||d[i-j+7]==1){
                cout<<"invalid";
                return 0;
            }
            else a[i]=1,b[j]=1,c[i+j]=1,d[i-j+7]=1;
        }
    }
    cout<<(n==8?"valid":"invalid");
    return 0;
}
