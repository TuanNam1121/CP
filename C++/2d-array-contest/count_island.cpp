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

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int a[100][100];
int n, m;

void loang(int i, int j){
    a[i][j] = 0;
    cout << "Di tham o " << i  << " " << j << endl;
    for(int k = 0 ; k < 4 ; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
            loang(i1, j1);
        }
    }
}

int main() {
    fast_io();
    cin >> n >> m;
    int cnt = 0; 
    rep2(i, j, 0, n, 0, m) cin >> a[i][j];
    
    rep2(i, j, 0, n, 0, m){
        if(a[i][j] == 1){
            ++cnt; 
            cout << "Xet mine co o bat dau la " << i << " " << j << endl;
            loang(i, j);
        }
    }

    cout << cnt;
    return 0;
}