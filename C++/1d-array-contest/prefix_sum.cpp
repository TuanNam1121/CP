#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int prefix_sum[n];
    prefix_sum[0] = a[0];
    for(int i = 1 ; i < n ; i++){
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    for(int i : prefix_sum) cout << i << " ";
}