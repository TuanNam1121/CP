#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // int n, m; cin >> n >> m;
    // vector<int> a(n), b(m);
    // for(int i = 0; i < n ;i++){
    //     cin >> a[i];
    // }

    // for(int i = 0 ; i < m ; i++){
    //     cin >> b[i];
    // }

    // vector<int> hop, giao;
    
    // int i,j; i = j = 0;

    // while(i < n && j < m){
    //     if(a[i] == b[j]){
    //         hop.push_back(a[i]);
    //         giao.push_back(a[i]);
    //         i++; j++;
    //     }
    //     else if(a[i] > b[j]){
    //         giao.push_back(b[j]);
    //         j++;
    //     }
    //     else{
    //         giao.push_back(a[i]);
    //         i++;
    //     }
    // }

    // while(i < n){
    //     hop.push_back(a[i]);
    //     i++;
    // }

    // while(j < m){
    //     hop.push_back(b[j]);
    //     j++;
    // }
    // cout << "Hop cua 2 mang :" << endl;
    // for(int i : hop) cout << i << " " ;
    // cout << endl;
    // cout << "Giao cua 2 mang :" << endl; 
    // for(int i : giao) cout << i << " ";

    // int n; cin >> n;
    // vector<int> a(n);
    // for(int i = 0 ; i < n ; i++){
    //     cin >> a[i];
    // }
    // sort(a.begin(), a.end()); // sort tăng dần
    // for(int i : a) cout << i << ' ';
    // cout << endl;
    // sort(a.begin(), a.end(), greater<int>()); // sort giảm dần
    // for(int i : a) cout << i << " ";

    vector<int> a;
    int temp;
    while(cin >> temp){
        a.push_back(temp);
    }

    for(int i : a) cout << i << " ";
    
}