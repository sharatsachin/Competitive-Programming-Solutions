// Created by Sharat Sachin
// Problem URL - https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0/
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,e,mx;
        cin>>n>>k;
        stack<pair<int,int>> s1, s2;
        rep(i,k) {
            cin>>e;
            s1.empty()? mx=e : mx = max(s1.top().second, e);
            s1.push({e,mx});
        }
        cout<<mx<<" ";
        rep(i,n-k) {
            cin>>e;
            if(s2.empty()) {
                while(!s1.empty()) {
                    int x = s1.top().first;
                    s1.pop();
                    s2.empty()? mx=x : mx = max(s2.top().second, x);
                    s2.push({x,mx});
                }
            }
            s2.pop();
            s1.empty()? mx=e : mx = max(s1.top().second, e);
            s1.push({e,mx});
            if(s1.empty() || s2.empty())
                cout<< (s1.empty() ? s2.top().second : s1.top().second) <<" ";
            else 
                cout<<max(s1.top().second, s2.top().second) << " ";
        }
        cout<<'\n';
    }
    return 0;
}
