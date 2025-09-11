#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ;i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<set<int>> res;
    int group = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i+1] - a[i] < k){
            res[group].insert(a[i]);
            if(!res[group].count(a[i])) group++;
        }
    }
    cout << group;  
}