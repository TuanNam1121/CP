#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    // sliding window
    // tạo ra tổng k số đầu tiên
    ll sum = 0;
    for(int i = 0; i < k ; i++) sum += a[i];

    ll res = sum, pos = 0;
    for(int i = 1 ; i < n - k; i++){
        sum = sum - a[i - 1] + a[i + k - 1];
        if(sum > res){
            res = sum;
            pos = i;
        }
    }
    cout << res << endl;
    for(int i = pos ; i < pos + k; i++){
        cout << a[i] << " ";
    }

}