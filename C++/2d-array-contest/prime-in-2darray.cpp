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

bool prime(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i <= sqrt(n); ++i){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    fast_io();
    int a[200][200];
    int n, m; cin >> n >> m;
    rep2(i, j, 0, n, 0, m) cin >> a[i][j];

    rep(i, 0, n){
        for(int j = 0 ; j < m ; ++j){
            if(prime(a[i][j])) cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}