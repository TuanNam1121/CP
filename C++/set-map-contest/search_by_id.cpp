#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    cin.ignore();
    map<string, string> mp;
    while(n--){
        string id, name;
        getline(cin, id);
        getline(cin, name);
        mp.insert({id, name});
    }
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string find; getline(cin, find);
        if(mp.count(find)) cout << mp[find] << endl;
        else cout << "NOT FOUND" << endl;
    }
}