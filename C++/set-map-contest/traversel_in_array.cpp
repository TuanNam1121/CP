#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    multiset<int> se;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    int q; cin >> q;
    while(q--){
        int tc, x; cin >> tc >> x;
        if(tc == 1) se.insert(x);
        else if(tc == 2){
            if(se.find(x) != se.end()) se.erase(se.find(x));
        }
        else{
            if(se.find(x) != se.end()) cout << "YES" <<endl;
            else cout << "NO" <<endl;
        }
    }
}