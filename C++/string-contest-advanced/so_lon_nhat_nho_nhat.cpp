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
    int m, s; cin >> m >> s;
    int temp = s;
    // số lớn nhất có được sẽ là
    // 999(m - 9)
    // số bé nhất thì phải là (m - 9)999 
    // lấy m - 1 trước đã để nếu như nó trừ hết thì số 0099 sẽ không hợp lệ
    // 1089
    // sai nếu : s > 9 * m hoặc là m = 1 mà s > 9

    if(s > 9 * m || (m == 1 && s > 9)){
        cout << "NOT FOUND";
        return 0;
    }
    int a[m];
    int b[m];
    for(int i = 0 ; i < m ; ++i){
        if(s >= 9){
            a[i] = 9;
            s -= 9;
        }
        else{
            a[i] = s;
            s = 0;
        }
    }

    temp -= 1;
    for(int i = m - 1; i >= 0; --i){
        if(temp >= 9){
            b[i] = 9;
            temp -= 9;
        }
        else b[i] = temp;
    }
    b[0] += 1;

    for(int i : b) cout << i ;
    cout << endl;
    for(int i : a) cout << i ;
    cout << endl;

    return 0;
}