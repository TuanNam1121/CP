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

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};


int a[100][100];
int n;
int s, t, u, v;
set<pair<int,int>> se;

void path(int s1, int t1){
    se.insert({s1, t1});
    a[s1][t1] = 0;
    for(int i = 0 ; i < 8 ; ++i){
        int i1 = s1 + dx[i], j1 = t1 + dy[i];
        if(i1 >= 0 && j1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 1){
            path(i1, j1);
        }
    }    
}


int main() {
    fast_io();
    cin >> n;
    cin >> s >> t >> u >> v;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];
    path(s - 1, t - 1);
    if(se.find({u - 1, v -1}) != se.end()) cout << "YES";
    else cout << "NO";
    return 0;
}