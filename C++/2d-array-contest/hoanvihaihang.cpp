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

int a[200][200];

int main() {
    fast_io();
    int n; cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];
    int u, v; cin >> u >> v;
    rep(i, 0, n){
        for(int j = 0 ; j < n ; j++){
            if(i == u - 1) cout << a[v-1][j] << " ";
            else if(i == v - 1) cout << a[u-1][j] << " ";
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}