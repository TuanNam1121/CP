#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0 ; i < n ; i++){
        auto up = upper_bound(a.begin(), a.end(), a[i]);
        if(up != a.end()) cout << *up << " ";
        else cout << "_ " ;
    }
}