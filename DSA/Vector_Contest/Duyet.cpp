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

int main() {
    fast_io();
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];
    int l, r; cin >> l >> r;

    for(int i = l; i <= r; ++i) cout << v[i] << " ";
    cout << endl;
    for(vector<int>::iterator it = v.begin() + r; it != v.begin() + l - 1; --it){
        cout << *it << " "; 
    }
    return 0;
}