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

int n, a[30], x[30];
int ok;
void  xuly(){
    int c1, c2; c1 = c2 = 0;
    for(int i = 0; i <= n ; ++i){
        if(x[i] == 1) c1 += a[i];
        else c2 += a[i];
    }
    if(c1 == c2) ok = 1;
}

void ql(int i){
    if(ok) return;
    for(int j = 0; j <= 1; ++j){
        x[i] = j;
        if(i == n){
            xuly();
        }
        else ql(i + 1);
    }
}

int main() {
    fast_io();
    cin >> n;
    ok = 0;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    ql(1);
    if(ok) cout << 1;
    else cout << 0;
    return 0;
}