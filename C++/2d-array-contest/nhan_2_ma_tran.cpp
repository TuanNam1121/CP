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
    int n, m, p; cin >> n >> m >> p;
    int a[n][m], b[m][p];
    rep2(i, j, 0, n, 0, m) cin >> a[i][j];
    rep2(i, j, 0, m, 0, p) cin >> b[i][j];

    int res[n][p];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < p ; ++j){
            res[i][j] = 0;
            for(int k = 0 ; k < m ; ++k){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    rep(i, 0, n){
        for(int j = 0 ; j < p ; ++j){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}