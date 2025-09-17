#include <bits/stdc++.h>
using namespace std;
#define ll long long

int firstPosLower(vector<int> a, int n, int x, int i){
    int l = i, r = n - 1,pos = -1;
    while(l <= r){
        int m = (r + l) / 2;
        if(a[m] < x){
            pos = m;
            l = m + 1;
        }
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return pos;
}


int main(){
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        int find = x - a[i];
        res += firstPosLower(a, n, find, i) - i;
    }
    cout << res;
}