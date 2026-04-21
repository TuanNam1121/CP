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

int n, a[21], x[21];
vector<string> s;

void in(int cnt){
    string res = "";
    for(int i = 1; i <= cnt; ++i) res += to_string(x[i]) + " ";
    s.pb(res);
}

void ql(int i, int start){
    for(int j = start; j <= n; ++j){
        if(a[j] > x[i - 1]){
            x[i] = a[j];
            if(i >= 2) in(i);
            ql(i + 1, j + 1);
        }
    }
}

int main() {
    fast_io();
    cin >> n;
    rep(i, 1, n + 1) cin >> a[i];
    ql(1, 1);
    sort(s.begin(), s.end());
    for(string i : s) cout << i << endl;
    return 0;
}