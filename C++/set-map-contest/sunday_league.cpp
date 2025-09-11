#include <bits/stdc++.h>
using namespace std;
#define ll long long

string trim(string s){
    while(s.find(' ') > -1) s.erase(s.find(' '));
    return s;
}

int main(){
    int n; cin >> n;
    cin.ignore();
    map<string,vector<string>> mp;
    string s;
    while(n--){
        getline(cin, s);
        int pos = s.find('-');
        string f1 = trim(s.substr(0, pos));
        string f2 = trim(s.substr(pos+1, s.length()));
        mp[f1].push_back(f2);
        mp[f2].push_back(f1);
    }

    for(auto it : mp){
        cout << it.first << ":";
        for(int i = 0 ; i < it.second.size(); i++){
            cout << it.second[i];
            if(i != it.second.size() - 1) cout << ", ";
        }
        cout << endl;
    }
}