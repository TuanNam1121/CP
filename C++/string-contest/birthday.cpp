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

string chuanhoa(string s){
    if(s.length() == 10) return s;
    rep(i, 0, s.size()){
        if(!isdigit(s[i])) s[i] = ' ';
    }
    stringstream ss(s);
    string res = "";
    string word; 
    while(ss >> word){
        if(word.size() == 1){
            res += '0' + word;
        }
        else res += word;
        if(word.length() != 4) res += '/';
    }
    return res;
}

int main() {
    fast_io();
    string s; cin >> s;
    cout << chuanhoa(s);
    return 0;
}