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

int a[100][100];
int n;

int main() {
    fast_io();
    cin >> n;
    rep2(i, j, 0, n, 0, n) cin >> a[i][j];
    set<int> s;

    rep(i, 0, n) s.insert(a[0][i]);

    rep(i, 1, n){
        set<int> eachrow;
        rep(j, 0, n){
            eachrow.insert(a[i][j]);
        }

        for (set<int>::iterator it = s.begin(); it != s.end();){
            if (eachrow.find(*it) == eachrow.end()){
                // khi erase phần tử trong set, se.erase sẽ trả về phần tử kế tiếp của set nên ta cần hứng lại nó bằng
                // it = s.erase(it)
                it = s.erase(it);
            }
            else{
                ++it;
            }
        }
    }
    if(s.size() > 0) for(auto it : s) cout << it << " ";
    else cout << "NOT FOUND";
    return 0;
}