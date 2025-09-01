#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(vector<int> a, int i, int n){
    if(i == n - 1){
        cout << a[i];
        return;
    }
    cout << a[i] << " ";
    print(a, ++i, n);
}

void print_rev(vector<int> a, int n){
    if(n == 0){
        cout << a[n] << " ";
        return;
    }
    cout << a[n] << " ";
    print_rev(a, --n);
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    print(a, 0, n);
    cout << endl;
    print_rev(a, n - 1);
}