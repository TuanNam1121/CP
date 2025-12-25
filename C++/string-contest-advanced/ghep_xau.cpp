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

bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() > b.size();
    return a > b;
}

int main() {
    fast_io();
    int n; cin >> n;
    vector<string> a;
    for(int i = 0; i < n; ++i){
        string c; cin >> c;
        a.pb(c);
    }
    sort(a.begin(), a.end(), cmp);
    for(string i : a) cout << i ;
    return 0;
}