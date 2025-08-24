#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            cout << abs(a[1] - a[0]) << " " << abs(a[n-1] - a[0]) << endl;
        }
        else if(i == n-1){
            cout << abs(a[n-1] - a[n-2]) << " " << abs(a[n-1] - a[0]) << endl;
        }
        else
            cout << min(abs(a[i] - a[i-1]), abs(a[i+1] - a[i])) << " " << max(abs(a[i] - a[0]), abs(a[n-1] - a[i])) << endl;
    }
}