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

bool isReverse(string s){
    string temp = s;
    reverse(temp.begin(), temp.end());
    return s == temp;
}

bool cmp(string a, string b){
    return a.size() < b.size();
}

int main() {
    fast_io();
    string s; getline(cin, s);
    vector<string> a;
    stringstream ss(s);
    string temp;
    while(ss >> temp){
        if(isReverse(temp)) a.push_back(temp);
    }
    sort(a.begin(), a.end(), cmp);
    for(string i : a){
        cout << i << " ";
    }
    return 0;
}