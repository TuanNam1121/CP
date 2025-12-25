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

bool check(string a, int k){
    int n = a.size() - 1;
    for(int i = n; i >= n - k; --i){
        if(a[i] != '0') return false;
    }
    return true;
}

int main() {
    fast_io();
    // de chia het 2^k (10^(k - 1) chuoi nhi phan) 
    // -> a chuoi nhi phan cx can % 10^(k - 1) => chuoi a can co k so 0 o cuoi de chia het
    string a; cin >> a;
    int k; cin >> k;
    if(check(a, k)) cout << "YES";
    else cout << "NO";
    return 0;
}