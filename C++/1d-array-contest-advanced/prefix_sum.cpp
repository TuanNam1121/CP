#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    a.push_back(0);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    vector<ll> prefix_sum(n+1);
    prefix_sum[0] = 0;
    for(int i = 1 ; i < n + 1; i++){
        prefix_sum[i] = prefix_sum[i-1] + a[i - 1]; 
    }
    
    for(int i : prefix_sum) cout << i << " " ;

    int q; cin >> q;
    vector<pair<int, int>> query(q);
    
    for(int i = 0 ; i < q ; i++){
        cin >> query[i].first >> query[i].second;
    }

    for(auto i : query){
        cout << prefix_sum[i.second] - prefix_sum[i.first - 1] << endl;
    }
}