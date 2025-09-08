#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    map<string, int> mp;
    while(cin >> s){
        if(mp.count(s)) mp[s]++;
        else mp[s] = 1;
    }

    auto mins = mp.begin(), maxs = --mp.end();

    cout << mp.size() <<endl;
    cout << mins->first << " " << maxs->first;
}