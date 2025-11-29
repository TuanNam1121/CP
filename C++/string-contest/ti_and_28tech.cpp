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

string pat = "28tech";

string lower(string s){
    for(int i = 0; i < s.size(); ++i){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    fast_io();
    string s; getline(cin, s);
    int cnt = 0;
    rep(i, 0, s.size()){
        if(s[i] == '2'){
            string sample = "";
            if(i <= s.size() - 6){
                rep(j, i, i+6) sample += s[j];
            }
            cout << lower(sample) << " " << pat << endl;
            if(lower(sample) == pat) ++cnt;
        }
        
    }
    cout << cnt;
    return 0;
}