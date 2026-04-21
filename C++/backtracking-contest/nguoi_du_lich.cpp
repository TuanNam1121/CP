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

int n, a[20][20];
int x[20], visitted[20];
int d, res, cmin;
int cnt;

void ql(int i){
    cnt++;
    for(int j = 1; j <= n; ++j){
        if(!visitted[j]){
            x[i] = j;
            visitted[j] = 1;
            d += a[x[i-1]][x[i]];
            if(i == n){
                res = min(d + a[x[i]][1], res);
            }
            else if(res > d + (n - i + 1) * cmin) ql(i + 1);
            visitted[j] = 0;
            d -= a[x[i-1]][x[i]];
        }
    }
}

int main() {
    fast_io();
    cin >> n;
    cnt++;
    d = 0, cmin = res = INT_MAX;
    rep2(i, j, 1, n + 1, 1, n + 1){
        cin >> a[i][j];
        cmin = min(cmin, a[i][j]);
    }
    x[1] = 1, visitted[1] = 1;
    ql(2);
    for(int i = 1; i <= n; ++i) cout << x[i] << " ";
    cout << endl; 
    cout << res << " " << cnt;
    return 0;
}