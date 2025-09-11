#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(int a, int b){
    return abs(a) < abs(b);
}

int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    stable_sort(a.begin(), a.end(), cmp);
    
    for(int i : a){
        cout << i << " ";
    }
}