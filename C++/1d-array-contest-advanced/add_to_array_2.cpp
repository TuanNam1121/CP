#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, d; cin >> n >> d;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int add = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] <= a[i-1]){
            add += (int)ceil((a[i-1] - a[i] + 1) / d);
            a[i] += (int)ceil((a[i-1] - a[i] + 1) / d) * d;
        }
    }
    cout << add;
}