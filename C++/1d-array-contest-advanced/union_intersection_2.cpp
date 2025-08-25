#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0 ; i < n; i++) cin >> a[i];
    for(int i = 0 ; i < m; i++) cin >> b[i];

    vector<int> hop, giao;
    int i,j; i = j = 0;

    while(i < n && j < m){
        if(a[i] == b[j]){
            giao.push_back(a[i]);
            hop.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] < b[j]){
            hop.push_back(a[i]);
            i++;
        }
        else{
            hop.push_back(b[j]);
            j++;
        }
    }

    while(i < n){
        hop.push_back(a[i]);
        i++;
    }

    while(j < m){
        hop.push_back(b[j]);
        j++;
    }

    for(int i : hop) cout << i << " ";
    cout << endl;
    for(int i : giao) cout << i << " ";
}