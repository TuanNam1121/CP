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

int lengthOfLongestSubstring(string s) {
    int res = 0, len = s.size();
    string buffer = "";

    for(int i = 0; i < len; ++i){
        auto pos = buffer.find(s[i]);

        if(pos == string::npos) buffer += s[i];
        else{
            res = max(res, (int)buffer.size());
            buffer = buffer.substr(pos + 1) + s[i];
        }
    }
    return max(res,(int)buffer.size());
}  



int main() {
    fast_io();
    string s; cin >> s;
    cout << lengthOfLongestSubstring(s);    
    return 0;
}