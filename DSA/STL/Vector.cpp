#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back
/* Vector
- Mảng động, cách sử dụng thân thiện hơn cấp phát động



*/

int main() {
    // khai bao vector
    vector<int> v;
    // them phan tu vao mang
    v.pb(1);
    v.pb(2);
    // tra ve so luong phan tu
    cout << v.size() << endl;

    // range-based for loop : for each
    int a[5] = {1, 5, 5, 6, 7};
    for(int &i : a) {
        cout << &i << endl;
        i += 10;
    }
    for(int i : a) cout << i << " ";
    cout << endl;
    // nhap phan tu
    int n; cin >> n;
    vector<int> b;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        b.push_back(x);
    }
    for(int i : b) cout << i << " ";

    // khai bao truoc so luong phan tu
    vector<ll> y(10);
    // co san 10 phan tu de truy cap
    y[5] = 10;
    cout << y[5];
    y.erase(y.begin() + 5);
    cout << y[5];
    return 0;
}