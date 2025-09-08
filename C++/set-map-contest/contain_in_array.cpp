#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define unsi unordered_set<int>
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int query; cin >> query;
    unsi se;
    for(int i = 0; i < n ; i++) se.insert(a[i]);
    while(query--){
        int tc; cin >> tc;
        if(se.find(tc) != se.end()) cout << "YES";
        else cout << "NO";
    } 
}