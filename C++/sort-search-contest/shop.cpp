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
    fast_io();
    int n; cin >> n;
    vector<int> come(n), leave(n);

    for(int i = 0 ; i < n ; ++i) cin >> come[i] >> leave[i];

    sort(all(come)); sort(all(leave));

    int i, j, current, res;
    i =  j = current = res = 0;
    while(i < n && j < n){
        if(come[i] < leave[j]){
            ++current;
            ++i;
            res = max(current, res);
        }
        else{
            --current;
            ++j;
        }
    }
    cout << res;
    return 0;
}