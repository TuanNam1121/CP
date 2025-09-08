#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // sliding window
    int l, r; l = r = 0;
    int lenght = INT32_MAX, distance = 0;

    for(int i = 0; i < n; i++){
        while(abs(a[l] - a[r]) != k){
            r++;
        }
    }
}