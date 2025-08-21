#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , k ; cin >> n >> k;
    int a[n], prefix_sum[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    prefix_sum[0] = a[0];

    for(int i = 1 ; i < n ; i++){
        prefix_sum[i] = prefix_sum[i-1] + a[i];
    }

    cout << prefix_sum[k - 1] << " ";

    for(int i = 1 ; i < n; i++){
        if(i + k - 1 >= n) break;
        cout << prefix_sum[i + k - 1] - prefix_sum[i - 1] << " "; 
    }

}