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
    int query; cin >> query;
    queue<ll> q;
    while(query--){
        int i; cin >> i;
        switch (i)
        {
        case 1:
            cout << q.size() << endl;
            break;
        case 2 :
            if(q.empty()) cout << "YES";
            else cout << "NO";
            cout << endl;
            break;
        case 3 :
            ll n; cin >> n;
            q.push(n);
            break;
        case 4 :
            if(!q.empty()) q.pop();
            break;
        case 5 :
            if(q.empty()) cout << -1 << endl;
            else cout << q.front() << endl;
            break;
        case 6 :
            if(q.empty()) cout << -1 << endl;
            else{
                for(int i = 1; i < q.size(); ++i){
                    int tmp = q.front();
                    q.pop();
                    q.push(tmp);
                }
                cout << q.front() << endl;
                q.push(q.front());
                q.pop();
            }
            break;
        }
    }
    return 0;
}