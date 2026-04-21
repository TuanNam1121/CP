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

int a[13][13], n;
bool used[13][13];
int dx[2] = {1, 0};
int dy[2] = {0, 1};

void ql(int i, int j, string s){
    if(i == n && j == n){
        cout << s << endl;
    }
    for(int x = 0; x < 2; ++x){
        int i1 = i + dx[x], j1 = j + dy[x];
        string move = (x == 0) ? "D" : "R";
        if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n && a[i1][j1] == 1){
            ql(i1, j1, s + move);
        }
    }
}

int main() {
    fast_io();
    cin >> n;
    rep2(i,j, 1, n + 1, 1, n + 1) cin >> a[i][j];
    a[1][1] = 0;
    ql(1, 1, "");
    return 0;
}