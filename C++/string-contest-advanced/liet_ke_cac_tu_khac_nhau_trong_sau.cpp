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
    vector<string> a;
    stringstream ss(s);
    string temp;
    while(ss >> temp){
        a.push_back(temp);
    }
    set<string> set;
    for(string i : a){
        set.insert(i);
    }
    for(string i : set){
        cout << i << " ";
    }
    cout << endl;
    for(string i : a){
        if(set.find(i) != set.end()){
            cout << i << " ";
            set.erase(i);
        }
    }

    return 0;
}