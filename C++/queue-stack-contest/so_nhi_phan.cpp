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

int main() {
    fast_io();
    queue<ll> q;
    int n; cin >> n;
    q.push(1);
    while(q.front() <= n){
        ll top = q.front();
        q.pop();
        cout << top << " ";
        q.push(top * 10);
        q.push(top * 10 + 1);
    }

    return 0;
}