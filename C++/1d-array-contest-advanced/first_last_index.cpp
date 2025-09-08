#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    int first, last; first = last = -1;
    for(int i = 0 ; i < n ; i++){
        if(first == -1 && a[i] == x) first = i + 1;
        else if(a[i] == x) last = i + 1; 
    }

    cout << first << "  " << last;
}