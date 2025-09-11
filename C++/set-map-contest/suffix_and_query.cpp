#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    set<int> num;
    vector<int> f(n);
    for(int i = n - 1; i >= 0; i--){
        num.insert(a[i]);
        f[i] = num.size();
    }

    int q; cin >> q;
    while(q--){
        int tc; cin >> tc;
        cout << f[tc] << endl;
    }
}