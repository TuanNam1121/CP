#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp1(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a < b;
    return a.second > b.second;
}

bool cmp2(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    if(a.second.first != b.second.first) return a.second.first > b.second.first;
    return a.second.second < b.second.second;
}

int main(){
    int n; cin >> n;
    map<int, int> mp;
    map<int, pair<int, int>> index;
    for(int i = 0 ; i < n ; i++){
        int c; cin >> c;
        mp[c]++;
        if(!index.count(c)){
            index[c].first = 1;
            index[c].second = i;
        }
        else index[c].first++;
    }
    vector<pair<int, int>> a;
    for(pair<int, int> it : mp){
        a.push_back(it);
    }
    vector<pair<int, pair<int, int>>> b;
    for(auto it : index){
        b.push_back(it);
    }

    sort(a.begin(), a.end(), cmp1);
    sort(b.begin(), b.end(), cmp2);

    for(auto i : a){
        for(int j = 0 ; j < i.second; j++) cout << i.first << " ";
    }
    cout << endl;
    for(auto i : b){
        for(int j = 0 ; j < i.second.first; j++){
            cout << i.first << " ";
        }
    }

}