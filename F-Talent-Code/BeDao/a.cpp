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
    int n; cin >> n;
    int res, num; res = num = 0;
    while(n--){
        string s; cin >> s;
        ll a; cin >> a;
        ll buffer = num;
        if(s == "L"){
            if(num - a < 0){
                res += (a - num) / 100;
                num = 100 - a;
            }
            else if(num - a == 0){
                res++;
                num = 0;
            }
            else num -= a;
        }
        else if(s == "R"){
            if(num + a > 100){
                res += (num + a) / 100;
                num = (num + a) % 100;
            }
            else if(num + a == 0){
                res++;
                num = 0;
            }
            else num += a;
        }
        cout << s << " " << a << endl;
        cout << num << endl;
        cout << res << endl;
    }    
    cout << res;
    return 0;
}