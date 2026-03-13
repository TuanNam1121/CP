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

int n, a[100][100];
string s = "";
bool haveres = false;

void Try(int i, int j){
    if(i == n && j == n){
        haveres = true;
        cout << s << endl;
    }

    if(i + 1 <= n && a[i + 1][j] == 1){
        a[i + 1][j] = 0;
        s += "D";
        Try(i + 1, j);
        a[i + 1][j] = 1;
        s.pop_back();
    }
    
    if(j - 1 >= 1 && a[i][j - 1] == 1){
        a[i][j - 1] = 0;
        s += "L";
        Try(i, j - 1);
        a[i][j - 1] = 1;
        s.pop_back();
    }
    
    if(j + 1 <= n && a[i][j + 1] == 1){
        a[i][j + 1] = 0;
        s += "R";
        Try(i, j + 1);
        a[i][j + 1] = 1;
        s.pop_back();

    }
    
    if(i - 1 >= 1 && a[i - 1][j] == 1){
        a[i - 1][j] = 0;
        s += "U";
        Try(i - 1, j);
        a[i - 1][j] = 1;
        s.pop_back();
    }

}



int main() {
    fast_io();
    cin >> n;
    rep2(i, j, 1, n + 1, 1, n + 1) cin >> a[i][j];
    a[1][1] = 0;
    Try(1, 1);
    if(!haveres) cout << -1;
    return 0;
}