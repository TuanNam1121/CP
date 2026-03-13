#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define rep2(i,j,a,b,c,d) for (int i = (a); i < (b); ++i) for (int j = (c); j < (d); ++j)

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n, k, a[100]; // mang a luu cau hinh
// cau hinh dau : 1 2 ... k
// cau hinh cuoi : n - k + 0, n - k + 1, n - k + 2, n - k + k (= n) 

void in(){
    for(int i = 1; i <= k; ++i) cout << a[i] << " ";
    cout << endl;
}

void ql(int i){
    for(int j = a[i - 1] + 1; j <= n - k + i; ++j){
        a[i] = j;
        if(i < k) ql(i + 1);
        else in();
    }
}

int main() {
    fast_io();
    cin >> n >> k;
    ql(1);
    return 0;
}