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
int n, m;

int dx[2] = {0, 1};
int dy[2] = {1, 0};

bool valid(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m; 
}

int sum(int i, int j){
    if(i == n - 1 && j == m - 1) return a[i][j];
    int i1 = i + dx[0], j1 = j + dy[0];
    int i2 = i + dx[1], j2 = j + dy[1];
    if(valid(i1, j1) && valid(i2, j2)){
        return max(sum(i1,j1), sum(i2, j2)) + a[i][j];
    }
    else if(valid(i1, j1)) return sum(i1,j1) + a[i][j];
    else if(valid(i2, j2)) return sum(i2, j2) + a[i][j];
    else return -1;
}


int main() {
    fast_io();
    cin >> n >> m;
    rep2(i, j, 0, n, 0, m) cin >> a[i][j];
    cout << sum(0, 0);
    return 0;
}