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

int n, k, a[20];
bool used[20];
int s, ok;

void ql(int start, int sum, int count){
    if(count == k){
        ok = 1;
        return;
    }
    for(int j = start; j <= n; ++j){
        if(sum + a[j] <= s && !used[j]){
            used[j] = 1;
            if(sum + a[j] == s) ql(1, 0, count + 1);
            else ql(j + 1, sum + a[j], count);
            used[j] = 0;
        }
    }
}

int main() {
    fast_io();
    cin >> n >> k;
    ok = s = 0;
    rep(i, 1, n + 1){
        cin >> a[i];
        s += a[i];
    }
    if(s % k != 0) cout << 0;
    else{
        memset(used, false, sizeof(used));
        s /= k;
        ql(1, 0, 0);
        cout << ok;
    }
    return 0;
}