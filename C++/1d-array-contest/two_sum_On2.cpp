#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int sum; cin >> sum;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            if(i == j) continue;
            else if(a[i] + a[j] == sum) count++;
        }
    }
    cout << count;
}