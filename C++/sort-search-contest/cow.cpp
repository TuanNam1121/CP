#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int lit = a[0];
    for(int i = 1; i < n; i++){
        lit += max(0, a[i] - i);
    }
    cout << lit;
}