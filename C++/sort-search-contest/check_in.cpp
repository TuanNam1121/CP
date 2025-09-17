#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(){
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        int t, d ; cin >> t >> d;
        a[i].first = t;
        a[i].second = d; 
    }
    sort(a.begin(), a.end(), cmp);
    int res = 0;
    for(pair<int, int> it : a){
        if(res < it.first) res = it.first + it.second;
        else{
            res += it.second;
        }
    }
    cout << res ;
}

