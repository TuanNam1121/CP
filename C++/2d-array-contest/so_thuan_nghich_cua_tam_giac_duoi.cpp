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

bool palindrome(int n){
    int rev = 0, ori = n;
    while(n > 0){
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    return rev == ori;
}

int a[1000][1000];
int main() {
    fast_io();
    int n; cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];
    int count = 0;
    rep2(i, j, 0, n, 0, n){
        if(j <= i && palindrome(a[i][j])) ++count;
    }
    cout << count;
    return 0;
}