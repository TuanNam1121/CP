#include <bits/stdc++.h>
using namespace std;
#define ll long long


// binary search thông thường không đệ quy
int bin_no_recursion(int a[], int l, int r, int v){
    int left = l, right = r;
    while(l <= r){
        int mid = (l + r)/2;
        if(a[mid] == v) return mid;
        else if(a[mid] > v) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    int q; cin >> q;
    while(q--){
        int tc; cin >> tc;
        if(bin_no_recursion(a, 0, n - 1, tc) != -1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}