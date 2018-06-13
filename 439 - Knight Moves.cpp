#include "bits/stdc++.h"
using namespace std;

#define FR(i,a,b) for(auto i=(a);i<(b);i++)
#define FV(i,v) for(auto i=(v).begin();i!=(v).end();++i)
#define ALL(v) ((v).begin(), (v).end())

using ll = long long;
queue<tuple<int,int,int>> que;

int visited[8][8];
int dx[] = {1,-1,1,-1,2,-2,2,-2};
int dy[] = {2,2,-2,-2,1,-1,-1,1};

bool checks(int a, int b){
    bool e = true;
    if(visited[a][b]>-1) e = false;
    if(a<0 || a>7) e = false;
    if(b<0 || b>7) e = false;
    return e;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string a,b;
    while(cin>>a>>b){

        FR(i,0,8) FR(j,0,8) visited[i][j] = -1;
        que.push({(int)a[0]-'a', (int)a[1]-'1',0});

        while(!que.empty()){
            auto tt = que.front();
            que.pop();
            if(!checks(get<0>(tt),get<1>(tt))) continue;
            else visited[get<0>(tt)][get<1>(tt)] = get<2>(tt);
            if(get<0>(tt)==int(b[0]-'a') && get<1>(tt)==int(b[1]-'1')) {
                que = queue<tuple<int,int,int>>();
                break;
            }
            else FR(i,0,8) que.push({get<0>(tt)+dx[i],get<1>(tt)+dy[i],get<2>(tt)+1});
        }
        cout<<"To get from "<<a<<" to "<<b<<" takes ";
        cout<<visited[(int)b[0]-'a'][(int)b[1]-'1'];
        cout<<" knight moves.\n";
        // FR(i,0,8) FR(j,0,8) cout<<visited[i][j]<<"\t\n"[j==7];
    }
    return 0;
}
