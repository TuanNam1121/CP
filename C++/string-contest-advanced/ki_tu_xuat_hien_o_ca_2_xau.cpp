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
    string s1, s2; cin >> s1 >> s2;
    int c[256] = {0};
    for(char i : s1){
        c[i]++;
    }

    for(char i : s2){
        c[i]++;
    }

    for(int i = 0 ; i < 256; ++i){
        if(c[i] > 1) cout << char(i);
    }
    cout << endl;
    for(int i = 0 ; i < 256; ++i){
        if(c[i] != 0) cout << char(i);
    }
    return 0;
}
