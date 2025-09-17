#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int,int> a, pair<int, int> b){
    return b.first < b.second;
}

int main(){
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    int res = 0;
    auto p = a[0];
    for(int i = 1; i < n; i++){
        if(a[i].first > p.second){
            ++res;
            p = a[i];
        }
    }
    cout << res;
}