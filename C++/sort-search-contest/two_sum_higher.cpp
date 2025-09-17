#include <bits/stdc++.h>
using namespace std;
#define ll long long

int upper(vector<int> a, int n, int x, int i){
    int l = i, r = n - 1, pos = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] > x){
            pos = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return pos;
}

int main(){
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n ; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        int find = x - a[i];
        int tc = upper(a, n - i, find, i);
        if(tc != -1){
            res += n - tc ;
        }
    }
    cout << res;
}