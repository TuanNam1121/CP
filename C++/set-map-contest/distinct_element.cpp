#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve_by_set(int a[], int n){
    set<int> se;
    for(int i = 0 ; i < n ; i++) se.insert(a[i]);
    return se.size();
}

int solve_by_map(int a[], int n){
    map<int, int> ma;
    for(int i = 0 ; i < n ; i++){
        if(ma.find(a[i]) == ma.end()) ma[a[i]] = 0;
    }
    return ma.size();
}

int solve_by_sort(int a[], int n){
    sort(a, a + n);
    int count = 1; 
    for(int i = 1 ; i < n ; i++){
        if(a[i] != a[i - 1]) count++;
    }
    return count;
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    cout << solve_by_set(a, n) << endl;
    cout << solve_by_map(a, n) << endl;
    cout << solve_by_sort(a, n) << endl;
}