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
    int count[256] = {0};
    for(char i : s1) count[(int)i]++;
    for(char i : s2) count[(int)i]++;

    for(int i = 0 ; i < 256 ; ++i){
        if(count[i] == 2) cout << (char)i;
    }
    cout << endl;
    for(int i = 0 ; i < 256 ; ++i){
        if(count[i] == 1) cout << (char)i;
    }
    return 0;
}