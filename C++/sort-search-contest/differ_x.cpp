#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0 ; i < n ; i++){
        int find = a[i] - x;
        if(binary_search(a.begin(), a.end(), find)){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << -1;
}