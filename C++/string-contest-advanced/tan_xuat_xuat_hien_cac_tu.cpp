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
    string s; getline(cin, s);
    map<string, int> mp;
    stringstream ss(s);
    vector<string> a;
    string temp;
    while(ss >> temp){
        mp[temp]++;
        a.push_back(temp);
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(string i : a){
        if(mp.find(i) != mp.end()){
            cout << i << " " << mp[i] << endl;
            mp.erase(i);
        }
    }
    return 0;
}