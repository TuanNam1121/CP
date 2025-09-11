#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    pair<int, int> max = {0, INT32_MIN};
    for(auto it : mp){
        if(it.second > max.second) max = it;
    }

    cout << max.first << " " << max.second;
}