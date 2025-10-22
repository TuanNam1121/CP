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
int a[500][500];


int main() {
    fast_io();
    int n; cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];

    cout << "Pattern 1:" << endl;
    int p1[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            p1[i][j] = a[j][i];
        }
    }

    rep(i, 0, n){
        for(int j = 0 ; j < n ; ++j){
            cout << p1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Pattern 2:" << endl;
    int p2[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            p2[i][j] = a[n - i - 1][n - j - 1];
        }
    }

    rep(i, 0, n){
        for(int j = 0 ; j < n ; ++j){
            cout << p2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Pattern 3:" << endl;
    int p3[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            p3[i][j] = a[j][n - i - 1];
        }
    }

    rep(i, 0, n){
        for(int j = 0 ; j < n ; ++j){
            cout << p3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Pattern 4:" << endl;
    int p4[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            p4[i][j] = a[i][n - j - 1];
        }
    }

    rep(i, 0, n){
        for(int j = 0 ; j < n ; ++j){
            cout << p4[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}