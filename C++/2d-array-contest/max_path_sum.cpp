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

int a[100][100];
int n;

int dx[3] = {1, 1, 1};
int dy[3] = {-1, 0, 1};

bool valid(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < n; 
}

int path(int i, int j){
    int res = a[i][j];
    for(int k = 0 ; k < 3 ; ++k){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(valid(i1, j1)) res = max(res, res + path(i1,j1));
    }
    return res;
}

int main() {
    fast_io();
    cin >> n;
    int sum = 0;
    rep2(i, j, 0, n, 0, n){
        cin >> a[i][j];
        sum += a[i][j];
    }
    cout << sum << endl;
    int res = 0;
    rep(i, 0, n){
        res = max(res, path(0, i));
    }
    cout << res; 
    return 0;
}