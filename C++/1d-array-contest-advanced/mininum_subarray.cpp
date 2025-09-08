#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i< n; i++) cin >> a[i];
    
    // sử dụng sliding windown : cửa sổ l và r cùng nhau trượt
    int l, r; l = r = 0;
    int sum = 0, lenght = INT32_MAX;

    for(int i = 0 ; i < n ; i++){
        sum += a[r];
        while(sum >= k){
            if(sum == k) lenght = min(r - l + 1, lenght);
            sum -= a[l];
            l++;
        }
        ++r; 
    }
    cout << lenght;
}