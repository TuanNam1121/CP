#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < n ; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    int count = 1;
    for(int i : b){
        a.insert(a.begin() + count, i);
        count += 2;
    }

    for(int i : a) cout << i << " ";
}

