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

string lower(string s){
    string res = "";
    for(int i = 0 ; i < s.size(); ++i){ 
        res += tolower(s[i]);
    }
    return res;
}

int main() {
    fast_io();
    string s1, s2;
    getline(cin, s1); 
    getline(cin, s2);
    stringstream ss1(s1), ss2(s2);
    string temp;
    set<string> set;
    while(ss1 >> temp){
        set.insert(lower(temp));
    }
    while(ss2 >> temp){
        if(set.find(lower(temp)) != set.end()) cout << lower(temp) << " ";
    }
    return 0;
}
