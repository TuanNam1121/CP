#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define rep2(i,j,a,b,c,d) for (int i = (a); i < (b); ++i) for (int j = (c); j < (d); ++j)

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool check(string a){
    ll sum = 0;
    int n = a.size() - 1, lt = 1;
    while(n--){
        sum += 1LL * (a[n] - '0') * lt;
        sum %= 5;
        lt *= 2;
        lt %= 5;
    }
    return sum % 5 == 0;
}



int main() {
    fast_io();
    // vì có 1000bit nên lũy thừa có thể lên đến 2^1000 chính vì vậy mà ta cần modulo lũy thừa
    string a; cin >> a;
    if(check(a)) cout << "YES";
    else cout << "NO";
    return 0;
}