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
    stringstream ss(s);
    map<string, int> map;
    string tmp;
    while(ss >> tmp){
        map[tmp]++;
    }
    pair<string, int> most, least;
    most.second = INT16_MIN;
    least.second = INT16_MAX;
    for(auto i : map){
        if(i.second >= most.second){
            most = i;
        }
        if(i.second <= least.second){
            least = i;
        }
    }
    cout << most.first  << " " << most.second;
    cout  << endl ;
    cout << least.first << " " << least.second;
    return 0;
}