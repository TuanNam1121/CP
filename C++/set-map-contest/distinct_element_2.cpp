#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n];
    set<int> se;
    for(int i = 0;  i < n ; i++){
        cin >> a[i];
        se.insert(a[i]);
    }

    for(auto it = se.begin(); it != se.end(); it++){
        cout << *it << " ";
    }
}