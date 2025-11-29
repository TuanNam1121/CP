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

string uppercase(string s){
    for(int i = 0 ; i < s.size(); ++i){
        s[i] = toupper(s[i]);
    }
    return s;
}

int main() {
    fast_io();
    string s;
    getline(cin, s);
    stringstream ss(s);
    int count = 0;
    string temp;
    while(ss >> temp){
        if(uppercase(temp) == temp) ++count;
    }
    cout << count;
    return 0;
}