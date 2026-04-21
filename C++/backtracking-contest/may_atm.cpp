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

int n, s, t[31];
int res;
void ql(int i, int start, int sum){
    for(int j = start; j <= n; ++j){
        if(sum + t[j] <= s){
            if(sum + t[j] == s) res = min(res, i);
            else ql(i + 1, j + 1, sum + t[j]);
        }
    }
}

int main() {
    fast_io();
    cin >> n >> s;
    rep(i, 1, n + 1) cin >> t[i];
    res = 1e9;
    sort(t + 1, t + n + 1);
    ql(1, 1, 0);
    cout << res;
    return 0;
}