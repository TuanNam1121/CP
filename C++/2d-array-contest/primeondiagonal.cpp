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

int a[200][200];
int n;

bool prime(int n){
    if(n < 2) return false;
    for(int i = 2 ; i <= sqrt(n); ++i){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    fast_io();
    cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];
    int cnt = 0 ;
    rep(i, 0, n){
        for(int j = 0 ; j < n ; j++){
            if(i == j || j == n - i - 1){
                if(prime(a[i][j])) ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}