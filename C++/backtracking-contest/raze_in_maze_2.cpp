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

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

int a[8][8], n;
bool used[8][8];

char xuly(int x){
    if(x == 0) return 'D';
    if(x == 1) return 'L';
    if(x == 2) return 'R';
    return 'U';
}

void ql(int i, int j, string res){
    if(i == n && j == n){
        cout << res << endl;
    }

    for(int x = 0; x < 4; ++x){
        int i1 = i + dx[x], j1 = j + dy[x];
        if(i1 > 0 && j1 > 0 && i1 <= n && j1 <= n && a[i1][j1] == 1 && !used[i1][j1]){
            used[i1][j1] = 1;
            ql(i1, j1, res + xuly(x));
            used[i1][j1] = 0;
        }
    }    
}

int main() {
    fast_io();
    cin >> n;
    rep2(i, j, 1, n + 1, 1, n + 1) cin >> a[i][j];
    a[1][1] = 0;
    memset(used, false, sizeof(used));
    ql(1, 1, "");
    return 0;
}