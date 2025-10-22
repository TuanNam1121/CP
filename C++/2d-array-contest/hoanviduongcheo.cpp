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
int main() {
    fast_io();
    int n; cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];

    for(int i = 0 ; i < n ; i++){
        swap(a[i][i], a[i][n-i-1]);
    }

    rep(i, 0, n){
        for(int j = 0; j < n ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}