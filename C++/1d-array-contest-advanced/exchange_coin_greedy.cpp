#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector<int> coin = {1000, 500, 200, 100, 50, 20, 10, 5, 2};
    ll a; cin >> a;
    int count = 0;
    for(int i = 0 ; i < (int)coin.size() ; i++){
        if(a < coin[i]) continue;
        count += a / coin[i];
        a %= coin[i];
    }
    
    cout << count + a;
}