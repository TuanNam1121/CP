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
    string s1, s2; cin >> s1 >> s2;
    set<char> set1, set2;
    for(char i : s1){
        set1.insert(i);
    }

    for(char i : s2){
        set2.insert(i);
    }
    
    for(char i : set1){
        if(set2.find(i) == set2.end()) cout << i;
    }
    cout << endl;
    for(char i : set2){
        if(set1.find(i) == set1.end()) cout << i;
    }

    return 0;
}
            