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

int a[500][500];
int n, m;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

bool valid(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == 1; 
}

int loang(int i, int j){
    a[i][j] = 0;
    int res = 1;
    for(int k = 0 ; k < 4 ; ++k){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(valid(i1, j1)) res += loang(i1, j1); 
    }
    return res;
}

int main() {
    fast_io();
    cin >> n >> m;
    rep2(i, j, 0, n, 0, m) cin >> a[i][j];
    int res = 0;
    rep(i, 0, n){
        rep(j, 0, m){
            if(a[i][j] == 1) res = max(res, loang(i, j));
        }
    }
    cout << res;
    return 0;
}