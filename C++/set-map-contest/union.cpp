#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    set<int> se;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
        se.insert(b[i]);
    }
    for(auto it = se.rbegin(); it != se.rend(); it++){
        cout << *it << " ";
    }
}