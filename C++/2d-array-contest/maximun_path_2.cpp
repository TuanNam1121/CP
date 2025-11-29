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

int dx[3] = {1, 1, 1};
int dy[3] = {-1, 0, 1};
 
int a[100][100];
int n;

bool valid(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < n;
}

int loang(int i, int j){
    if(i == n - 1) return a[i][j];
    int sum = 0;
    cout << "path " << i << ' ' << j << endl;
    for(int k = 0 ; k < 3 ; ++k){
        int i1 = i + dx[k], j1 = j + dy[k];
        int weight = loang(i1, j1) + a[i][j];
        cout << sum << " " << weight << endl;
        if(valid(i1, j1)) return max(sum, weight);
    }
    return sum;
}


int main() {
    fast_io();
    cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];
    int res = INT32_MIN;
    for(int i = 0; i < n; ++i){
        res = max(res, loang(0, i));
    }
    cout << res;
    return 0;
}