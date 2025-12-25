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

bool check(string s){
    bool have6 = false;
    for(int i = 0 ; i < s.size(); ++i){
        if(s[i] != s[s.size() - 1 - i]){
            return false;
        }
        if(s[i] == '6') have6 = true;
    }
    return have6;
}

int main() {
    fast_io();
    string s; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}
