#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxInt = 1e9 + 7;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int min = maxInt;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == j) continue;
            else if(abs(a[i] - a[j]) < min) min = abs(a[i] - a[j]);
        }
    }
    cout << min;
}