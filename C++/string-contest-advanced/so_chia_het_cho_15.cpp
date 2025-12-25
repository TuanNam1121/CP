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
    if((a[a.size() - 1] - '0') % 5 != 0) return false;
    int sum = 0;
    for(char i : a) sum += i - '0';
    return sum % 3 == 0;
}

int main() {
    fast_io();
    string a; cin >> a;
    if(check(a)) cout << "YES";
    else cout << "NO";
    return 0;
}