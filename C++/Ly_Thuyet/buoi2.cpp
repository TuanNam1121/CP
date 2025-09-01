#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    // sliding window
    //Tìm subarray có k phần tử sao cho tổng subarray là lớn nhất

    // tạo ra tổng từ 0 đến k
    ll sum = 0 ;
    for(int i = 0 ; i < k ; i++) sum += a[i];
    ll res = sum, pos = 0;
    // trượt từng phần tử một , -a[i - 1] + a[i + k + 1] , trừ thằng đầu cộng thằng cuối
    for(int i = 1 ; i <= n - k ; i++){
        sum = sum - a[i - 1] + a[i + k + 1];
        // so sánh , truy vấn
        if(res < sum){
            res = sum;
            pos = i;
        }
    }

    cout << res << endl; // dãy con có k phần tử lớn nhất
}