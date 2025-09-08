#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    sort(a.begin(), a.end());
    int presum , possum; presum = possum = 0;
    k = min(k, n - k);
    for(int i = 0 ; i < n ; i++){
        if(i < k) presum += a[i];
        else possum += a[i];
    }

    cout << possum - presum;
}