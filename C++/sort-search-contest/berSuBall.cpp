#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    int move[3] = {-1, 0, 1};
    fast_io();
    int n, m; cin >> n ;
    multiset<int> a, b;
    for(int i = 0 ; i < n ; i++){
        int t; cin >> t;
        a.insert(t);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int t; cin >> t;
        b.insert(t);
    }

    int res = 0;
    for(auto it : a){
        for(int i = 0 ; i < 3 ; i++){
            multiset<int>::iterator x = b.find(it + move[i]);
            if(x != b.end()){
                ++res;
                b.erase(x);
                break;
            }
        }
    }
    cout << res;
    return 0;
}