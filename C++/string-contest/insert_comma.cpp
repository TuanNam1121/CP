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
    string s; cin >> s;
    int outer = s.size() % 3;
    if(outer % 3 != 0){
        rep(i, 0, outer){
            cout << s[i];
        }
        cout << ',';
    }
    int count = 0;
    rep(i,outer, s.size()){
        count++;
        cout << s[i];
        if(count == 3 && i != s.size() - 1){
            cout << ',';
            count = 0;
        }
    }
    return 0;
}