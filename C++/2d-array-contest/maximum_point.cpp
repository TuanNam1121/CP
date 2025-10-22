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

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


int a[200][200];
int main() {
    fast_io();
    int n, m; cin >> n >> m;
    rep2(i, j, 0, n, 0, m) cin >> a[i][j];
    int count = 0;
    rep(i, 0, n){
        for(int j = 0 ; j < m; ++j){
            // xet 8 o xung quanh
            bool ok = true;
            for(int k = 0 ; k < 8 ; k++){
                int i1 = i + dx[k];
                int j1 = j + dy[k];
                if(i1 >= 0 && i1 <= n && j1 >= 0 && i1 <= m){
                    if(a[i1][j1] >= a[i][j]){
                        ok = false;
                        break;
                    }
                }
            }
            if(ok) count++;
        }
    }
    cout << count;
    return 0;
}