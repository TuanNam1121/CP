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

int main() {
    fast_io();
    cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];

    rep(i, 0, n){
        if(i == 0 || i == n - 1){
            rep(j, 0, n){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        else{
            rep(j, 0, n){
                if(j == 0 || j == n - 1) cout << a[i][j] << " ";
                else cout << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}