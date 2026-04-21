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

int n, c[10], d1[30], d2[30], res, sum;
int a[10][10];

void ql(int i){
    for(int j = 1; j <= n; ++j){
        if(!c[j] && !d1[i - j + n] && !d2[i + j - 1]){
            c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            sum += a[i][j];
            if(i == n){
                res = max(res, sum);
            }
            else ql(i + 1);
            sum -= a[i][j];
            c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}

int main() {
    fast_io();
    n = 8;
    res = sum = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
        }
    }
    ql(1);
    cout << res;
    return 0;
}