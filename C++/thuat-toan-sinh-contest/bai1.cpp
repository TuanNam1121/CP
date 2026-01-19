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
    bool changed = 0;
    for(int i = s.size() - 1; i >= 0; --i){
        if(s[i] == '0'){
            s[i] = '1';
            changed = 1;
            break;
        }
        else s[i] = '0';
    }
    if(changed) cout << s;
    else for(int i = 0; i < s.size(); ++i) cout << '0';
    return 0;
}