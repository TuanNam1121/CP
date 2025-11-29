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

bool haveChar(string temp){
    for(char i : temp){
        if(isalpha(i)){
            return true;
        }
    }
    return false;
}

int main() {
    fast_io();
    string s; getline(cin, s);
    stringstream ss(s);
    string temp;
    string res;
    while(ss >> temp){
        if(!haveChar(temp)) continue;
        for(char i : temp){
            if(isalpha(i)) res += i;
        }
        res += " ";
    }     
    cout << res;
    return 0;
}