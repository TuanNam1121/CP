#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    set<int> sa, sb;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        sa.insert(a[i]);
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
        sb.insert(b[i]);
    }

    for(int i = 0 ; i < n ; i++){
        if(sb.count(a[i])) cout << a[i] << " ";
    }

}