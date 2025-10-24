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
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int a[100][100];
int n, m;
int s, t, v, u;

bool path(int s1, int t1){
    if(s1 == v - 1 && t1 == u - 1) return true;
    a[s1][t1] = 0;
    for(int i = 0 ; i < 4 ; i++){
        int i1 = s1 + dx[i], j1 = t1 + dy[i];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
            return path(i1, j1);
        }
    }
    return false;
}


int main() {
    fast_io();
    cin >> n >> m;
    cin >> s >> t >> v >> u;
    rep2(i, j, 0, n, 0, m) cin >> a[i][j];
    if(path(s - 1, t - 1)) cout << "YES"; 
    else cout << "NO";
    return 0;
}