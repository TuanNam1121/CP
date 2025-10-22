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

int a[1000][1000];
int main() {
    fast_io();
    int n, m; cin >> n >> m;
    rep2(i, j, 0, n, 0, m) cin >> a[i][j];

    for(int i = 0 ; i < n ; ++i){
        int sum = 0;
        for(int j = 0 ; j < m; ++j){
            sum += a[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
    for(int i = 0 ; i < m ; ++i){
        int sum = 0;
        for(int j = 0 ; j < n ; ++j){
            sum += a[j][i];
        }   
        cout << sum << " ";
    }
    return 0;
}