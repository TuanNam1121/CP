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

string touppercase(string s){
    rep(i, 0, s.size()){
        s[i] = toupper(s[i]);
    }
    return s;
}

string tolowercase(string s){
    rep(i, 0, s.size()){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    fast_io();
    string s; 
    getline(cin, s);

    for(int i = s.size() - 1; i >= 0; i--){
        cout << s[i];
    }
    cout << endl;
    cout << touppercase(s) << endl;
    cout << tolowercase(s) << endl;
    return 0;
}