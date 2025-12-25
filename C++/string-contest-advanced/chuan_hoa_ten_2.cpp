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

void convert(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); ++i){
        s[i] = tolower(s[i]);
    }
}

void upper(string &s){
    for(int i = 0 ; i < s.size(); ++i){
        s[i] = toupper(s[i]);
    }
}

int main() {
    fast_io();
    string s; getline(cin, s);
    stringstream ss(s);
    vector<string> a;
    string temp;
    while(ss >> temp){
        convert(temp);
        a.pb(temp);
    }
    upper(a[a.size() - 1]);
    for(int i = 0; i < a.size() - 1; ++i){
        cout << a[i] << " ";
    }

    cout << ", " << a[a.size() - 1] << endl;
    
    cout << a[a.size() - 1] << ", ";

    for(int i = 0; i < a.size() - 1; ++i){
        cout << a[i] << " ";
    }
    return 0;
}