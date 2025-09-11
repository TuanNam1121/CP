#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Có 2 cách làm
// cách 1 : dùng unordered_set insert vào rồi cout ra size
// cách 2 : sort 1 lần rồi dùng linear search : nlog(n) + n 

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int num = 1;
    for(int i = 1 ; i < n ; i++){
        if(a[i] != a[i - 1]) num++;
    }
    cout << num;
}   