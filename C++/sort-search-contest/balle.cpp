#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m;
    cin >> n >> m;
    multiset<int> a;
    vector<int> b(m);
    for(int i = 0 ; i < n ; i++ ){
        int c; cin >> c;
        a.insert(c);
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
    }
    int couple = 0;
    for(int i = 0 ; i < m ; i++){
        auto it = lower_bound(a.begin(), a.end(), b[i]);
        if(it != a.end()){
            couple++;
            a.erase(it);
        }
    }
    cout << couple;
}