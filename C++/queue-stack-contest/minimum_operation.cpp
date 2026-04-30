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

bool used[10005];
int solve(){
    memset(used, false, sizeof(used));
    int s, t; cin >> s >> t;
    queue<pair<int, int>> q;
    q.push({s, 0});
    used[s] = true;
    while(!q.empty()){
        auto it  = q.front(); q.pop();
        int u = it.first, cnt = it.second;
        if(u == t) return cnt;
        if(u * 2 < 10000 && !used[u * 2]){
            used[u * 2] = true;
            q.push({u*2, cnt + 1});
        }
        if(u - 1 > 0 && !used[u - 1]){
            used[u - 1] = true;
            q.push({u - 1, cnt + 1});
        }
    }
    return -1;
}

int main() {
    fast_io();
    int t; cin >> t;
    while(t--) cout << solve() << endl;
    return 0;
}