#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool sothuannghich(int n){
    if(n < 10) return 1;
    int rev = 0, temp = n;
    while(temp > 0){
        rev += (temp % 10);
        temp /= 10;
        if(temp > 0) rev *= 10;
    }
    return rev == n;
}

int main() {
    fast_io();
    int n; cin >> n;
    int a[200][200];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(j <= i && sothuannghich(a[i][j])){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}