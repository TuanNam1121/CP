#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define rep2(i,j,a,b,c,d) for (int i = (a); i < (b); ++i) for (int j = (c); j < (d); ++j)

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}



int main() {
    fast_io();
    int query; cin >> query;
    queue<ll> q;
    while(query--){
        string s; cin >> s;

        if(s =="PUSH"){
            int n; cin >> n;
            q.push(n);
        }               
        if(s == "POP"){
            if(!q.empty()) q.pop();
        }
        if(s == "PRINTFRONT"){
            if(!q.empty()) cout << q.front() << endl;
        }
    }
    return 0;
}