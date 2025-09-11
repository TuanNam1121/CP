#include <bits/stdc++.h>
using namespace std;
#define ll long long

int firstPos(vector<int> a, int n, int x){
    int l = 0, r = n - 1, pos = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == x){
            pos = m;
            r = m - 1;
        }
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return pos;
}

int lastPos(vector<int> a, int n, int x){
    int l = 0, r = n - 1, pos = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == x){
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
    cout << firstPos(a, n, x) << endl;
    cout << lastPos(a, n, x) << endl;
    cout <<  distance(a.begin(),lower_bound(a.begin(), a.end(), x)) << endl;
    cout << distance(a.begin(),upper_bound(a.begin(), a.end(), x)) << endl;
    if(firstPos(a, n, x) == -1) cout << 0;
    else cout << lastPos(a, n, x) - firstPos(a, n, x);
}