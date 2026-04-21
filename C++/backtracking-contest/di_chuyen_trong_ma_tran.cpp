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

int m, n, a[15][15];
int res;
int dx[2] = {1, 0};
int dy[2] = {0, 1};

void ql(int i, int j){
    if(i == m - 1 && j == n - 1) ++res;
    for(int x = 0; x < 2; ++x){
        int i1 = i + dx[x], j1 = j + dy[x];
        if(i1 >= 0 && j1 >= 0 & i1 < m && j1 < n){
            ql(i1, j1);
        }
    }
}


int main() {
    fast_io();
    cin >> m >> n;
    rep2(i, j, 0, m, 0, n) cin >> a[i][j];
    res = 0;
    ql(0, 0);
    cout << res;
    return 0;
}