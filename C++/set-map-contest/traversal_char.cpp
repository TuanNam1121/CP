#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s; getline(cin, s);
    map<char, int> mp;
    for(char i : s){
        if(mp.count(i)) mp[i]++;
        else mp[i] = 1;
    }
    pair<char, int> minc = {'_', INT32_MAX}, maxc = {'_', INT32_MIN};
    for(auto &q : mp){
        if(q.second <= minc.second) minc = q;
        else if(q.second > maxc.second) maxc = q;
    }

    cout << maxc.first << ' ' << maxc.second <<endl;
    cout << minc.first << ' ' << minc.second <<endl;
    cout << mp.size();
}