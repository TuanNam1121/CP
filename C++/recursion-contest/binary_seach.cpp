#include <bits/stdc++.h>
using namespace std;
#define ll long long

int bin_search(int a[],int value ,int l, int r){
    if(l == r && a[l] != value) return -1;
    int mid = (l + r) / 2;
    if(a[mid] == value) return mid;
    else if(a[mid] > value) return bin_search(a, value, l, mid - 1);
    else return bin_search(a, value, mid + 1, r);
} 


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int value; cin >> value;
    if(bin_search(a, value, 0, n) > -1){
        cout << 1 << " Index = " << bin_search(a, value, 0, n);
    }
    else cout << -1;
}