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
    string s;
    cin >> s;
    bool right = true;
    for(int i = 1 ; i < s.size() ; ++i){
        if(abs(s[i] - s[i - 1]) > 1){
            right = false;
            break;
        }
    }
    if(right) cout << "YES";
    else cout << "NO";
    return 0;
}