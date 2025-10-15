#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x; cin >> n >> x;
    map<int, int> m;

    for(int i = 0 ; i < n ; i++){
        int c; cin >> c;
        m[c] = i;
    }
    int res = -1;
    for(auto it : m){
        auto i = m.find(abs(it.first - x));
        if(i != m.end() && i->second != it.second){
            res = 1;
            break;
        }
    }
    cout << res;
    return 0;
}