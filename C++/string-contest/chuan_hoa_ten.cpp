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

void normalize(string &s){
    if(s[2] != '/') s = "0" + s;
    if(s[5] != '/') s.insert(3, "0");
}

void viethoa(string &s){
    for(int i = 0 ; i < s.size(); ++i) s[i] = toupper(s[i]);
}

int main() {
    fast_io();
    string s; getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    string temp;
    while(ss >> temp){
        convert(temp);
        v.push_back(temp);
    }
    string name =  "";
    for(int i = 0; i < v.size(); ++i){
        name += v[i];
        if(i != v.size() - 1) name += " ";
    }
    cout << name << endl;
    string day; getline(cin, day);
    normalize(day);
    cout << day;
    return 0;
}