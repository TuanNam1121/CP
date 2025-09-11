#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    map<string, vector<pair<int,int>>> mp;
    string s;
    while(getline(cin, s)){
        stringstream line(s);
        string name;
        int x, y;
        line >> name >> x >> y;
        mp[name].push_back({x, y});
    }

    for(auto it : mp){
        int mark, credit;
        mark = credit = 0;
        for(auto i : it.second){
            mark += i.first * i.second;
            credit += i.first;
        }
        cout << it.first << ": " << (1.0 * mark / credit);
        cout << endl;
    }
}