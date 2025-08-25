#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < m ; i++) cin >> b[i];

    sort(a.begin(), a.end()); 
    sort(b.begin(), b.end());
    vector<int> hop, giao;
    int i, j; i = j = 0;
    while(i < n && j < m){
        if(a[i] == a[i - 1]){
            i++;
            continue;
        }
        if(b[j] == b[j - 1]){
            j++;
            continue;
        }
        
        if(a[i] == b[j]){
            hop.push_back(a[i]);
            giao.push_back(b[j]);
            i++; j++;
        }
        else if(a[i] > b[j]){
            hop.push_back(b[j]);
            j++;
        }
        else{
            hop.push_back(a[i]);
            i++;
        }
    }

    while(i < n){
        hop.push_back(a[i]);
        i++;
    }

    while (j < m){
        hop.push_back(b[j]);
        j++;
    }
    
    for(int i : giao) cout << i << " ";
    cout << endl;
    for(int i : hop) cout << i << " ";

}