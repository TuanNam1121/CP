#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ; cin >> n ;
    vector<int> a(n);
    vector<int> mark(1e6 + 1, 0);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mark[a[i]]++;
        if(mark[a[i]] == 2){
            cout << a[i] ;
            break;
        }
    }
}