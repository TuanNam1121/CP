#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int add = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] <= a[i - 1]){
            add += a[i - 1] - a[i] + 1;
            a[i] += a[i-1]  - a[i] + 1;
        }
    }

    cout << add ;
}