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
    int kitu[256] = {0};
    string s; cin >> s;
    int len = s.size();
    for(int i =0; i < len; ++i){
        kitu[s[i]]++;
    }

    for(int i = 0 ; i < 256; ++i){
        if(kitu[i] > 0){
            cout << char(i) << " " << kitu[i] << endl;
        }
    }

    cout << endl;

    for(int i = 0; i < len; ++i){
        if(kitu[s[i]] > 0){
            cout << s[i] << " " << kitu[s[i]] << endl;
            kitu[s[i]] = 0;
        }
    }

    return 0;
}