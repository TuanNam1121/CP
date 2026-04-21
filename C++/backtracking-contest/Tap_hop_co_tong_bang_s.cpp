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

int n, k, s, cnt;

void ql(int i, int start, int sum){
    for(int j = start; j <= n; ++j){
        if(sum + j <= s){
            if(sum + j == s && i == k) ++cnt;
            else ql(i + 1, j + 1, sum + j);
        }
    }
}


int main() {
    fast_io();
    cin >> n >> k >> s;
    cnt = 0;
    ql(1, 1, 0);
    cout << cnt;    
    return 0;
}