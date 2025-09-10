#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n; cin >> n;
    map<int, int> mp;
    
    for(int i = 1; i <= 5; i++){
        mp[i] = i + 10;
    }

    for(auto it : mp){
        cout << it.first << ' ' << it.second << endl;
    }

    auto it = mp.lower_bound(3);
    cout << (*it).first << " " << (*it).second;

}